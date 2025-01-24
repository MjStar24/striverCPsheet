#include<iostream>
using namespace std;
#include<algorithm>

int main(){
    int t,a,b;cin>>t;
    while(t--){
        cin>>a>>b;
        if(2*a==b || 2*b==a) {
            cout<<2*a*b<<endl;
            continue;
        }
        int adj=max({a,b,a+b}),hori=max(2*a,b),verti=max(2*b,a);
        cout<<min({adj*adj,hori*hori,verti*verti})<<endl; 
       
    }

    return 0;
}