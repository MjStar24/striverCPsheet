#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int l=max(a,b),br=min(a,b);
        if(2*br>=l) cout<<2*br*br*2<<endl;
        else cout<<l*l<<endl;
    }
    return 0;
}