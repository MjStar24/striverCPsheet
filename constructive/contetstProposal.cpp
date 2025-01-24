#include <iostream>
using namespace std;

int solve(int x, int n, int d)
{
    if (n == 0)
    {
        cout << "reached zero " << 1 % d << endl;
        return 1 % d;
    }
    long long u = solve(x, n / 2, d);
    cout << "n and u before " << n << " " << u << endl;
    u = (u * u) % d;
    cout << "between u " << u << endl;
    if (u % 2 == 1)
        u = (u * x) % d;
    cout << "n and u after " << n << " " << u << endl;
    return u;
}

int main()
{
    // int i,n;
    // int arr[105],arr1[105];
    // for(cin>>i;i;--i){
    //     cin>>n;
    //     for(int i=0;i<n;i++){
    //         cin>>arr[i];
    //     }
    //     for(int i=0;i<n;i++){
    //         cin>>arr1[i];
    //     }
    //     int ans=0,j=0;
    //     for(int i=0;i<n;i++){
    //         if(arr[j]>arr1[i]){
    //             ans++;
    //         }
    //         else j++;

    //     }
    //     cout<<ans<<endl;
    // }
    // int u=-1,d=20;
    // cout << (u*u)%20;

    string curr="hello";
    string manas(5,curr[0]);
    cout<<manas;

    return 0;

    
}