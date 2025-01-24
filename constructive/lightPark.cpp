#include<iostream>
using namespace std;
#include<algorithm>

int main(){
    int t,n,m;
    cin>>t;
    while(t--){
        cin>>n>>m;
        int lessn=n==1?1:n-1;
        int lessm=m==1?1:m-1;
        if(m%2==0){
            int ans=min(lessm*n,lessn*m);
            cout<<ans<<endl;
        }else{
            // int mid=low+
        }
    }
    return 0;
}