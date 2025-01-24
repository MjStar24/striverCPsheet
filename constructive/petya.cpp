#include<iostream>
using namespace std;

int main(){

    int t,n,x;
    cin>>t;
    while(t--){
        cin>>n>>x;
        int floor=1;
        if(n==1 || n==2) {
            cout<<1<<endl;
            continue;
        }
        floor++;
        for(int i=3;i<=n;i+=x){
            if(n>=i && n<i+x) cout<<floor<<endl;
            floor++;
        } 


    }

    return 0;
}