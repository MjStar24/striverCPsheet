#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        ll n;cin>>n;
        ((n%14 <= 6 && n%14>0) && n>14) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}