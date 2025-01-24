#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int t,x,y,z;
    cin>>t;
    while(t--){
        cin>>x>>y>>z;
        if(x==y && y==z) {
            cout<<"YES"<<endl;
            cout<< x <<" "<<x<<" "<< x <<" " <<endl;
            continue;
        }
        int smallest=min({x,y,z});

        if((x==y && x>smallest) || (x==z && x>smallest) || (y==z && y>smallest) ){
            cout<<"YES"<<endl;
            cout<<max(x,y) << " " <<min(x,min(y,z)) << " " << min(x,min(y,z)) << endl;
        }else cout<<"NO"<<endl;
    }
    return 0;
}