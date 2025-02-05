#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;


int toAdd(ll a){
    ll maxi=INT64_MIN,mini=INT64_MAX;
    while(a){
        ll val=a%10;
        maxi=max(maxi,val);
        mini=min(mini,val);
        a/=10;
    }
    return maxi*mini;
}

int main(){
    int t;cin>>t;
    while(t--){
        ll a,k;cin>>a>>k;
        k--;
        bool found=false;
        while(!found && k--){
            ll val=toAdd(a);
            if(val==0) 
                found=true;
            
            a+=val;
        }

        cout<<a<<endl;
    }
    return 0;
}