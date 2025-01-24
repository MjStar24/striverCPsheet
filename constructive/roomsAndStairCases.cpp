// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;string s;
//         cin>>n>>s;
//         int left=-1,right=-1;
//         for(int i=0;i<n;i++){
//             if(s[i]=='1'){
//                 if(left==-1) left=i;
//                 right=i;
//             }
//         }

//         if(left==-1) cout<<n<<endl;
//         else{
//             cout<<max(2*(n-left),2*(right+1));
//         }

//     }

//     return 0;
// }


#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        int n; // Number of rooms on each floor
        string s; // Staircase connectivity as a binary string
        cin >> n >> s;

        // Find the first and last indices where there is a staircase ('1')
        int left = -1, right = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                if (left == -1) left = i; // First occurrence of '1'
                right = i; // Last occurrence of '1'
            }
        }

        if (left == -1) {
            // No staircases exist, Nikolay can only stay on one floor
            cout << n << endl;
        } else {
            // Calculate the maximum rooms Nikolay can visit
            int max_rooms = max(2 * (n - left), 2 * (right + 1));
            cout << max_rooms << endl;
        }
    }

    return 0;
}
