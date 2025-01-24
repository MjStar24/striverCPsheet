#include<iostream>
using namespace std;
int main(){
    int t,val,n;
    cin>>t;
    string s;
    while(t--){
        cin>>s;
        val=s[0]-'0';
        n=s.length();
        cout<<10*(val-1)+((n*(n+1))/2)<<endl;
    }

    return 0;
}