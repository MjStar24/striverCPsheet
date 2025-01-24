#include<iostream>
using namespace std;

int main(){
    int n,maxi=INT8_MIN,mini=INT8_MAX,dmax=0,dmin=0,val;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>val;
        if(val>maxi){
            maxi=val;
            dmax=i;
        }
        if(val<=mini){
            mini=val;
            dmin=i;
        }
    }
    if(dmin>dmax) cout<<(dmax-1)+(n-dmin);
    else  cout<<(dmax-1)+(n-dmin-1);
    return 0;
}