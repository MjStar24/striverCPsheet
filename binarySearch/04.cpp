#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        ll n,h;cin>>n>>h;
        vector<ll> v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        ll low=1,high=h;
        while(low<=high){
            ll mid=low+(high-low)/2;//here mid is k (look at the question)
            ll damage=0;
            for(int i=1;i<n;i++){
                damage+=min(v[i]-v[i-1],mid);
            }
            damage+=mid;
            if(damage>=h) high=mid-1;
            else low=mid+1;
        }

        cout<<low<<endl;

    }
    return 0;
}