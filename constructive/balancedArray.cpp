// #include<iostream>
// using namespace std;

// int main(){
//     int t,n;
//     cin>>t;
//     while(t--){
//         cin>>n;
//         n/=2;
//         if(n%2) {
//             cout<<"NO"<<endl;
//             continue;
//         }
//         cout<<"YES"<<endl;
//         for(int i=1;i<=n;i++){
//             cout<<i*2<<" ";
//         }
//         for(int i=1;i<=n-1;i+=2){
//             cout<<i<<" ";
//         }cout<<(2*n-1)+n<<endl;

//     }
//     return 0;
// }

#include<iostream>
using namespace std;

int main(){
    int t, n;
    cin >> t;
    while(t--){
        cin >> n;
        
        if (n % 4 != 0) {
            cout << "NO" << endl;
            continue;
        }
        
        cout << "YES" << endl;
        
        // First half (even numbers)
        for (int i = 1; i <= n / 2; i++) {
            cout << i * 2 << " ";
        }
        
        // Second half (odd numbers)
        for (int i = 1; i < n / 2; i++) {
            cout << i * 2 - 1 << " ";
        }
        cout << (n / 2) * 3 - 1 << endl; // Corrected the last number to match the pattern

    }
    return 0;
}
