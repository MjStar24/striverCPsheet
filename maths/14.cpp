// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int n;
//         cin>>n;
//         if((n/2)%2) cout<<"NO"<<endl;
//         else{
//             cout<<"YES"<<endl;
//             for(int i=1;i<=n/2;i++){
//                 cout<<i*2<<" ";
//             }
//             for(int i=1;i<n/2;i++){
                
//                 cout<<i*2-1<<" hii ";
//             }
//             int val=n/2;
//             cout<<val*(val+1)-(val-1)*(val-1);
//         }
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        if ((n/2) % 2 ) {
            cout << "NO" << endl;
        } else {
            cout << "YES" << endl;
            // Print even numbers
            for (int i = 1; i <= n / 2; i++) {
                cout << i * 2 << " ";
            }
            // Print odd numbers
            for (int i = 1; i < n / 2; i++) {
                cout << i * 2 - 1 << " ";
            }
            // Last element to balance the sum
            cout << (n / 2) * (n / 2 + 1) - (n / 2 - 1) * (n / 2 - 1) << endl;
        }
    }
    return 0;
}
