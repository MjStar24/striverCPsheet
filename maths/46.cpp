#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    ll n,ans=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        ans+=(1LL<<i);
    }
    cout<<ans;
    return 0;
}