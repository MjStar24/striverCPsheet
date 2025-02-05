#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    string s;int one=0;
    cin>>s;
    for(int i=0;i<s.length();i++) if(s[i]=='1') one++;
    int n=s.length();
    (n%2) ? (cout<<((one>1) ? n/2+1 : n/2)<<endl) : (cout<<n/2<<endl);
    return 0;
}