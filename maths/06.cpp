// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     while(t--){
//         int a,b,c;
//         cin>>a>>b>>c;
//         if(a==b==c) {
//             cout<<"YES"<<endl;
//             cout <<a<<" "<<a<<" "<<a<<endl;
//         }
//         else if(a==b>c){
//             cout<<"YES"<<endl;
//             cout<<a<<" "<<c<<" "<<c<<endl;
//         }
//         else if(b==c>a){
//             cout<<"YES"<<endl;
//             cout<<b<<" "<<a<<" "<<a<<endl;
//         }else if(c==a>b){
//             cout<<"YES"<<endl;
//             cout<<a<<" "<<b<<" "<<b<<endl;
//         }else cout<<"NO"<<endl;
//     }
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a == b && b == c) {
            cout << "YES" << endl;
            cout << a << " " << a << " " << a << endl;
        } 
        else if (a == b && a > c) {
            cout << "YES" << endl;
            cout << a << " " << c << " " << c << endl;
        } 
        else if (b == c && b > a) {
            cout << "YES" << endl;
            cout << b << " " << a << " " << a << endl;
        } 
        else if (c == a && c > b) {
            cout << "YES" << endl;
            cout << c << " " << b << " " << b << endl;
        } 
        else {
            cout << "NO" << endl;
        }
    }
    return 0;
}
