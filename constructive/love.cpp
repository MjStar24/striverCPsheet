#include <iostream>
#include <string>
#include <map>
#include <algorithm>
using namespace std;

struct ListNode
{
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
};

ListNode *reverse(ListNode *head)
{
    ListNode *prev = NULL;
    ListNode *curr = head;
    while (curr)
    {
        ListNode *next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }
    return prev;
}

int lPalin(ListNode *A)
{
    ListNode *reversed = reverse(A);
    ListNode *temp1 = A;
    ListNode *temp2 = reversed;
    while (temp1)
    {
        // if(temp1->val!=temp2->val) return 0;
        cout << "temp1 : " << temp1->val << " ";
        temp1 = temp1->next;
    }
    cout << endl;
    while (temp2)
    {
        cout << "temp2 : " << temp2->val << " ";
        temp2 = temp2->next;
    }
    return 1;
}

int main()
{
    ListNode *l1 = new ListNode(0);
    ListNode *l2 = new ListNode(1);
    ListNode *l3 = new ListNode(2);
    ListNode *l4 = new ListNode(3);
    ListNode *l5 = new ListNode(4);
    l1->next = l2;
    l2->next = l3;
    l3->next = l4;
    l4->next = l5;
    l5->next = NULL;
    // lPalin(l1);

    // string s = "Manas";
    // // cout<<s.substr(0,2);
    // char ch = '1';
    // cout << ch << endl;
    // cout << ++ch;

    // map<int,pair<int,int>> m;
    // if(m.find(0)!=m.end()){
    //     cout<<"yes";
    // }else cout<<"No";

    string m = "manas";
    // sort(m.begin(), m.end());
    cout << m.substr(2);

    return 0;
}

string Solution::fractionToDecimal(int A, int B)
{
    string ans = "";
    long long int num = A;
    long long int den = B;
    if (num > 0 && den < 0)
    {
        ans += '-';
    }
    else if (num < 0 && den > 0)
    {
        ans += '-';
    }
    num = abs(num);
    den = abs(den);
    if (num == 0)
    {
        return "0";
    }
    long long int r = num % den;
    long long int v = num / den;
    ans += to_string(v);
    map<long long int, long long int> m;
    if (r != 0)
    {
        ans += '.';
        while (1)
        {
            if (m.find(r) != m.end())
            {
                return ans.substr(0, m[r]) + '(' + ans.substr(m[r]) + ')';
                break;
            }
            if (r == 0)
            {
                return ans;
                break;
            }
            m[r] = ans.size();
            long long int d = (r * 10) / den;
            ans += to_string(d);
            r = (r * 10) % den;
        }
    }
    return ans;
}

int Solution::solve(vector<int> &A, int B)
{
    int xr = 0;
    map<int, int> mpp;
    mpp[xr]++; // to add (0,1)
    int n = A.size();
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        xr = xr ^ A[i];
        int x = xr ^ B;
        count += mpp[x];
        mpp[xr]++;
    }
    return count;
}

// // string Solution::fractionToDecimal(int N, int D) {
//     long long A = N;
//     long long B = D;
//     string ans = "";
//     if((A<0 && B>0) || (A>0 && B<0)) ans = "-";
//     A = abs(A); B = abs(B);
//     ans += to_string(A/B);
//     long long a = A%B;

//     if(a==0) return ans;
//     else ans+='.';

//     map<long long, long long> m;
//     vector<long long> v;
//     long long bk=-1;  //To mark the breakpoint of recurring
//     while(a) {
//         if(m.find(a)==m.end()){
//             v.push_back(a);
//             m[a] = (a*10)/B;
//             a*=10;
//             a%=B;
//         }
//         else { bk = a; break; }
//     }
//     if(a==0) for(int i=0;i<v.size();i++)  ans+=to_string(m[v[i]]);

//     else{
//         for(int i=0;i<v.size();i++){
//             if(v[i]==bk) ans+='(';
//             ans+=to_string(m[v[i]]);
//         }
//         ans+=')';
//     }
//     return ans;
// }

Intuition : is to use the map to store the count of the
                xors occurred as same xor
            can cancel out.

                Approach : -Create a vector containing prefix xors -
                Create an unordered map and have a count initialised
                    with 0 -
                Traverse through the prefix xor
            vector : -find the xor we need to make as xor_needed = I ^ B - If map contains needed xor than count += mp[xor_needed] - if I == B : Increment count - Increment current element count in map - return count

                                                                                                                                                 int
                                                                                                                                                 Solution::solve(vector<int> & a, int B)
{
    int n = a.size();
    vector<int> prefix_xor(n, 0);
    prefix_xor[0] = a[0];
    for (int i = 1; i < n; i++)
    {
        prefix_xor[i] = prefix_xor[i - 1] ^ a[i];
    }
    unordered_map<int, int> mp;
    int count = 0;
    for (int i : prefix_xor)
    {
        int xor_needed = B ^ i;
        if (mp.find(xor_needed) != mp.end())
        {
            count += mp[xor_needed];
        }
        if (i == B)
        {
            count++;
        }
        mp[i]++;
    }
    return count;
}

class Solution
{
public:
    vector findSubstring(string s, vector &words)
    {
        unordered_map<string, int> counts;
        for (string word : words)
            counts[word]++;
        int n = s.length(), num = words.size(), len = words[0].length();
        vector indexes;
        for (int i = 0; i < n - num * len + 1; i++)
        {
            unordered_map<string, int> seen;
            int j = 0;
            for (; j < num; j++)
            {
                string word = s.substr(i + j * len, len);
                if (counts.find(word) != counts.end())
                {
                    seen[word]++;
                    if (seen[word] > counts[word])
                        break;
                }
                else
                    break;
            }
            if (j == num)
                indexes.push_back(i);
        }
        return indexes;
    }
};

string Solution::minWindow(string s, string t)
{

    int ans = INT_MAX, i = 0, j = 0, start = 0;

    unordered_map<char, int> mp;

    for (auto it : t)
    {

        mp[it]++;
    }

    int count = mp.size();

    while (j < s.size())
    {

        mp[s[j]]–;

        if (mp[s[j]] == 0)
            count–;

        if (count == 0)
        {

            while (count == 0)
            {

                if (mp.find(s[i]) != mp.end())
                {

                    mp[s[i]]++;

                    if (mp[s[i]] == 1)
                    {

                        count++;

                        if (j - i + 1 < ans)
                        {

                            ans = j - i + 1;

                            start = i;
                        }
                    }
                }

                i++;
            }
        }

        j++;
    }

    if (ans == INT_MAX)
        return “”;

    return s.substr(start, ans);
}

vector<int> rowDir{-1, 1, 0, 0, -1, -1, 1, 1};
vector<int> colDir{0, 0, -1, 1, -1, 1, -1, 1};
void helper(int i, int j, int &count, vector<vector<int>> &A)
{
    count++;
    A[i][j] = 0;
    for (int k = 0; k < 8; k++)
    {
        int next_i = i + rowDir[k];
        int next_j = j + colDir[k];
        if (next_i >= 0 && next_i < A.size() && next_j >= 0 && next_j < A.front().size() && A[next_i][next_j] != 0)
            helper(next_i, next_j, count, A);
    }
}
int Solution::solve(vector<vector<int>> &A)
{
    int r = A.size();
    int c = A.front().size();
    int ans = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (A[i][j] != 0)
            {
                int count = 0;
                helper(i, j, count, A);
                ans = max(ans, count);
            }
        }
    }
    return ans;
}

// // vector<int> dx={1,-1,0,0};
// // vector<int> dy={0,0,1,-1};

// // bool isValid(int x,int y,int N,int M){
// //     return x>=0 && y>=0 && x<N && y<M;
// // }

// // void dfs(int i,int j,int N,int M,bool &blue,bool &red,vector<vector<int>> &visited,vector<vector<int> > &A){
// //     if(i==0 || j==0) {
// //         blue=true;
// //         return;
// //     }

// //     if(i==N-1 || j==M-1) {
// //         red=true;
// //         return;
// //     }

// //     visited[i][j]=1;
// //     for(int k=0;k<4;k++){
// //         int X=i+dx[k],Y=j+dy[k];
// //         if(isValid(X,Y,N,M) && !visited[X][Y] && A[X][Y]<=A[i][j]) dfs(X,Y,N,M,blue,red,visited,A);
// //     }
// //     visited[i][j]=0;

// // }

// // int Solution::solve(vector<vector<int> > &A) {
// //     int ans=0;

// //     int N=A.size();
// //     int M=A[0].size();

// //     vector<vector<int>> visited(N,vector<int>(M,0));

// //     for(int i=0;i<N;i++){
// //         for(int j=0;j<M;j++){
// //             bool blue=false,red=false;
// //             dfs(i,j,N,M,blue,red,visited,A);
// //             if(blue && red) ans++;
// //         }
// //     }
// //     return ans;
// // }

#include <vector>
using namespace std;

vector<int> dx = {1, -1, 0, 0};
vector<int> dy = {0, 0, 1, -1};

bool isValid(int x, int y, int N, int M)
{
    return x >= 0 && y >= 0 && x < N && y < M;
}

void dfs(int i, int j, int N, int M, bool &blue, bool &red, vector<vector<int>> &visited, vector<vector<int>> &A)
{
    // if (visited[i][j]) return;

    visited[i][j] = 1;

    if (i == 0 || j == 0)
        blue = true;
    if (i == N - 1 || j == M - 1)
        red = true;

    for (int k = 0; k < 4; k++)
    {
        int X = i + dx[k], Y = j + dy[k];
        if (isValid(X, Y, N, M) && !visited[X][Y] && A[X][Y] <= A[i][j])
        {
            dfs(X, Y, N, M, blue, red, visited, A);
        }
    }
}

int Solution::solve(vector<vector<int>> &A)
{
    int N = A.size();
    int M = A[0].size();
    int ans = 0;

    vector<vector<int>> visited(N, vector<int>(M, 0));

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            // Resetting visited array for each DFS traversal
            for (int x = 0; x < N; x++)
            {
                fill(visited[x].begin(), visited[x].end(), 0);
            }

            bool blue = false, red = false;
            dfs(i, j, N, M, blue, red, visited, A);
            if (blue && red)
                ans++;
        }
    }
    return ans;
}

void dfs(int row, int col, vector<vector<int>> &A, vector<vector<int>> &vis, int delrow[], int delcol[])
{
    vis[row][col] = 1;
    int n = A.size();
    int m = A[0].size();

    for (int i = 0; i < 4; i++)
    {
        int nrow = row + delrow[i];
        int ncol = col + delcol[i];

        if (nrow >= 0 && nrow < n && ncol >= 0 && ncol < m)
        {
            if (A[nrow][ncol] >= A[row][col] && !vis[nrow][ncol])
            {
                dfs(nrow, ncol, A, vis, delrow, delcol);
            }
        }
    }
}

int Solution::solve(vector<vector<int>> &A)
{
    int n = A.size();
    int m = A[0].size();
    vector<vector<int>> visB(n, vector<int>(m, 0));
    vector<vector<int>> visR(n, vector<int>(m, 0));

    int delrow[4] = {-1, 0, 1, 0};
    int delcol[4] = {0, 1, 0, -1};
    // first col
    for (int i = 0; i < n; i++)
    {
        if (!visB[i][0])
            dfs(i, 0, A, visB, delrow, delcol);
    }

    // first row
    for (int j = 0; j < m; j++)
    {
        if (!visB[0][j])
            dfs(0, j, A, visB, delrow, delcol);
    }

    // last col
    for (int i = 0; i < n; i++)
    {
        if (!visR[i][m - 1])
            dfs(i, m - 1, A, visR, delrow, delcol);
    }

    // last row
    for (int j = 0; j < m; j++)
    {
        if (!visR[n - 1][j])
            dfs(n - 1, j, A, visR, delrow, delcol);
    }
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (visB[i][j] && visR[i][j])
                count++;
        }
    }

    return count;
}

int Solution::snakeLadder(vector<vector<int>> &A, vector<vector<int>> &B)
{
    unordered_map<int, int> ladder;
    for (auto it : A)
    {
        ladder[it[0]] = it[1];
    }
    unordered_map<int, int> snake;
    for (auto it : B)
    {
        snake[it[0]] = it[1];
    }
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> q;
    q.push({0, 1});
    vector<int> vis(101, 0);
    vis[1] = 1;
    while (!q.empty())
    {
        int step = q.top().first;
        int node = q.top().second;
        q.pop();

        if (node == 100)
        {
            return step;
        }

        for (int i = 1; i <= 6; i++)
        {
            int newNode = node + i;
            if (!vis[newNode])
            {
                if (newNode <= 100 && ladder[newNode] > 0)
                {
                    q.push({step + 1, ladder[newNode]});
                    vis[ladder[newNode]] = 1;
                }
                else if (newNode <= 100 && snake[newNode] > 0)
                {
                    q.push({step + 1, snake[newNode]});
                    vis[snake[newNode]] = 1;
                }
                else
                {
                    if (newNode <= 100)
                    {
                        q.push({step + 1, newNode});
                        vis[newNode] = 1;
                    }
                }
            }
        }
    }
    return -1;
}

bool checkPallindrome(string A, int i, int j)
{
    while (i <= j)
    {
        if (A[i] != A[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

int Solution::solve(string A)
{

    bool isPal = checkPallindrome(A, 0, A.size() - 1);
    if (A.size() % 2 == 1)
    {
        if (isPal == true)
        {
            return 1;
        }
    }
    else
    {
        if (isPal == true)
        {
            return 0;
        }
    }
    int i = 0;
    int j = A.size() - 1;
    while (i <= j)
    {
        if (A[i] != A[j])
        {
            break;
        }
        i++;
        j--;
    }

    bool check1 = checkPallindrome(A, i + 1, j);
    bool check2 = checkPallindrome(A, i, j - 1);
    
    if (check1 || check2)
    {
        return 1;
    }
    return 0;
}