#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int n;cin>>n;
    if(n<=2) cout<<"No"<<endl;
    else {
        cout<<"Yes"<<endl;
        cout<<(n+1)/2<<" ";
        for(int i=1;i<=n;i++) if(i%2) cout<<i<<" ";
        cout<<endl;
        cout<<n/2<<" ";
        for(int i=1;i<=n;i++) if(!(i%2)) cout<<i<<" ";
    }
    return 0;
}