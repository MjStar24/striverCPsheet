#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    ll n,total=0;cin>>n;
    total+=2LL*n*n;
    ll hori=(n+1)*(n+2)/2;
    total+=(2LL*hori-1);
    cout<<total;
    return 0;
}