#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,a,b;
        cin>>x>>y>>a>>b;
        if(2*a<=b) cout<<min(x,y)*2*1ll*a+abs(x-y)*1ll*a<<endl;
        else cout<<min(x,y)*1ll*b+abs(x-y)*1ll*a<<endl;
    }
    
    return 0;
}