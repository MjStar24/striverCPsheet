#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,a,b;
        cin>>n>>a>>b;
        int k=min(b-a,n);
        if(b<=a){
            cout<<n*a<<endl;
        }else{
            cout<<((b+b-k+1)*k/2) + (n-k)*a<<endl;
        }
    }
    return 0;
}