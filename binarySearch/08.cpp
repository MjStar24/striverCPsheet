#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;

bool checkcount(ll val,ll k,ll n,ll m){
    ll count = 0;
    for(int i=1;i<=n;i++){
        count+=min(m,val/i);
    }
    return count<k;
}
int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    ll maxi=max(n,m);
    ll low=1,high=n*m,ans=0;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(checkcount(mid,k,n,m)) {
            low=mid+1;
        }
        else{
            ans=mid;
            high=mid-1;
        }
    }
    cout<<ans;
    return 0;
}