#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;

ll sum(ll n){
    return (n*(n+1))/2;
}
int main(){
    ll n,k;
    cin>>n>>k;
    n--;
    ll s=sum(k-1);
    if(s<n) cout<<-1;
    else {
        ll low=0,high=k-1;
        while(low<=high){
            ll mid=low+(high-low)/2;
            if(s-sum(mid)>=n) low=mid+1;
            else high=mid-1;
        }
        cout<<k-high-1;//because we need the end elements my nigga slatt
    }
    return 0;
}

