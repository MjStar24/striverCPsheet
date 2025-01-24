#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,m,ans=-1;
    cin>>n>>m;
    if(n<m) cout<<-1;
    else if(n==m) cout<<n;
    else{
        int optimal=n/2;
        int ran=optimal;
        optimal+=((n%2) ? 1 : 0);
        for(int i=0;i<=ran;i++){
            if(i>0) optimal++;
            if(optimal%m==0) {
                ans=optimal;
                break;
            }
        }
        cout<<ans;
    }

    return 0;
}