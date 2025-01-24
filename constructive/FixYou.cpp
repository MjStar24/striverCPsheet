#include<iostream>
using namespace std;
int main(){
    int t,n,m,ans=0;char val;
    cin>>t;
    while(t--){
        ans=0;
        cin>>n>>m;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=m;j++){
                cin>>val;
                if(i==n && val=='D') ans++;
                if(j==m && val=='R') ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}