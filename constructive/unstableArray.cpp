#include<iostream>
using namespace std;
int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        if(n==1){
             cout<<0<<endl;
             continue;
        }
        if(n<=2){
            cout<<m<<endl;
            continue;
        }
        n+=(n%2==0) ? 0:1;
        int k=(n-2)/2;
        int val=m/k;
        int ans=(val+m%k)*2 + (k-1)*val*2;
        cout<<ans<<endl;
    }
    return 0;
}