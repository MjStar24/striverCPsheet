#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int n;cin>>n;vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    sort(v.begin(),v.end());
    if(v[n-1]>=v[n-2]+v[n-3]) {cout<<"NO"<<endl;return 0;}
    swap(v[n-1],v[n-2]);
    cout<<"YES"<<endl;
    for(int i=0;i<n;i++) cout<<v[i]<<" ";
    return 0;
}