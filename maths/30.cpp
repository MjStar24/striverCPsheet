#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    ll n;
    cin>>n;
    if(n%2) cout<<0;
    else (n%4) ? cout<<n/4 : cout<<n/4-1;
    return 0;
}