// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;string s;
//         bool ok=true;
//         cin>>n>>s;
//         for(int i=0;i<n;i--){
//             int val=abs(s[i]-s[n-i-1]);
//             if(val>2 || val%2 ==1){
//                 ok=false;break;
//             }
//         }
//         cout<< (ok ? "YES" : "NO")<<endl;
//     }
//     return 0;
// }


#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main() {
    int t; // Number of test cases
    cin >> t;
    while (t--) {
        int n; // Length of the string
        string s; // Input string
        bool ok = true;
        cin >> n >> s;

        for (int i = 0; i < n / 2; i++) {
            int val = abs(s[i] - s[n - i - 1]);
            if (val > 2 || val % 2 == 1) {
                ok = false;
                break;
            }
        }

        cout << (ok ? "YES" : "NO") << endl;
    }
    return 0;
}
