// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// #include<queue>
// #include <iomanip>
// #include<unordered_map>

// #define ll long long

// using namespace std;


// int n,m;
// int a1,a2;
// bool check(int val,vector<vector<int>> &v){
//     vector<int> msk(1<<m,-1);
//     for(int i=0;i<n;i++){
//         int curr=0;//current is representing row in a bitmask
//         for(int j=0;j<m;j++){
//             if(v[i][j]>=val){
//                 curr^=1<<j;
//             }
//         }
//         msk[curr]=i;
//     }

//     if(msk[1<<m-1]!=-1){
//         a1=a2=msk[1<<m-1];
//         return true;
//     }

//     for(int i=0;i<1<<m;i++){
//         for(int j=0;j<1<<m;j++){
//             if(msk[i]!=-1 && msk[j]!=-1 && (i|j)==1<<m-1){//zero based indexing of a bitmask
//                 a1=msk[i];
//                 a2=msk[j];
//                 return true;
//             }
//         }
//     }

//     return false;
// }

// int main(){
    
//     cin>>n>>m;

//     vector<vector<int>> v(n,vector<int>(m));    

//     int maxi=0;

//     for(int i=0;i<n;i++){
//         for(int j=0;j<m;j++){
//             cin>>v[i][j];
//             int val=v[i][j];
//             maxi=max(val,maxi);
//         }
//     }

//     int low=0;
//     while(low<=maxi){
//         int mid=low+(maxi-low)/2;
//         if(check(mid,v)) low=mid+1;
//         else mid-1;
//     }

//     cout<<a1<<" "<<a2;


//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int n, m;
int a1, a2;

bool check(int val, vector<vector<int>> &v) {
    vector<int> msk(1 << m, -1); // Initialize all bitmask indices to -1
    for (int i = 0; i < n; i++) {
        int curr = 0; // Current row represented as a bitmask
        for (int j = 0; j < m; j++) {
            if (v[i][j] >= val) {
                curr |= (1 << j); // Set the j-th bit if v[i][j] >= val
            }
        }
        msk[curr] = i; // Store the row index for this bitmask
    }

    // Check if a single row covers all columns
    if (msk[(1 << m) - 1] != -1) {
        a1 = a2 = msk[(1 << m) - 1];
        return true;
    }

    // Check all pairs of rows to see if their union covers all columns
    for (int i = 0; i < (1 << m); i++) {
        for (int j = 0; j < (1 << m); j++) {
            if (msk[i] != -1 && msk[j] != -1 && (i | j) == (1 << m) - 1) {
                a1 = msk[i];
                a2 = msk[j];
                return true;
            }
        }
    }

    return false;
}

int main() {
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m));

    // Read the matrix and find the maximum value
    int maxi = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> v[i][j];
            maxi = max(maxi, v[i][j]);
        }
    }

    // Binary search for the maximum minimum value
    int low = 0, high = maxi;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (check(mid, v)) {
            low = mid + 1; // Try for a higher value
        } else {
            high = mid - 1; // Try for a lower value
        }
    }

    // Output the indices (1-based)
    cout << a1 + 1 << " " << a2 + 1 << endl;

    return 0;
}