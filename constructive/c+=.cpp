#include<iostream>
using namespace std;
int main(){
    int t,a,b,n;
    cin>>t;
    while(t--){
        cin>>a>>b>>n;
        int i=0;
        while(a<=n && b<=n){
            if(a>b){
                b+=a;
            }else{
                a+=b;
            }
            i++;
        }
        cout<<i<<endl;
    }

    return 0;
}