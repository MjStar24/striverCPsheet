#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    ll a,b,s;
    cin>>a>>b>>s;
    ll val = s-abs(a)-abs(b);
    if(val%2==0 && s>=abs(a)+abs(b)) cout<<"Yes"<<endl;
    else cout<<"No"<<endl;
    return 0;
}