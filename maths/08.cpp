#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c,n;
        cin>>a>>b>>c>>n;
        int maxi=max({a,b,c});
       
        n-=(abs(maxi-a)+abs(maxi-b)+abs(maxi-c));
 
        if(n>=0 && n%3==0) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;


    }
    return 0;
}