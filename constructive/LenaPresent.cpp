// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=0;i--){

//         for(int k=0;k<2*i;k++)
//             cout<<" ";
        
//         for(int j=1;j<=n-i;j++)
//             cout<<j<<" ";
        
        
//         for(int k=n-i-1;k>0;k--)
//             cout<<k<<" ";
//         if(i!=n)cout<<0;
//         cout<<endl;
//     }

//     for(int i=1;i<=n;i++){
//         for(int k=0;k<2*i;k++)
//             cout<<" ";
        
//         for(int j=0;j<=n-i;j++)
//             cout<<j<<" ";
        
//         for(int k=n-i-1;k>0;k--)
//             cout<<k<<" ";
//         if(i!=n)cout<<0;
//         cout<<endl;
//     }
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    // Upper half of the rhombus, including the middle row
    for (int i = 0; i <= n; i++) {
        // Print leading spaces
        for (int k = 0; k < 2 * (n - i); k++)
            cout << " ";

        // Print ascending numbers
        for (int j = 0; j <= i; j++) {
            if (j > 0) cout << " ";
            cout << j;
        }

        // Print descending numbers
        for (int j = i - 1; j >= 0; j--)
            cout << " " << j;

        cout << endl;
    }

    // Lower half of the rhombus
    for (int i = n - 1; i >= 0; i--) {
        // Print leading spaces
        for (int k = 0; k < 2 * (n - i); k++)
            cout << " ";

        // Print ascending numbers
        for (int j = 0; j <= i; j++) {
            if (j > 0) cout << " ";
            cout << j;
        }

        // Print descending numbers
        for (int j = i - 1; j >= 0; j--)
            cout << " " << j;

        cout << endl;
    }

    return 0;
}
