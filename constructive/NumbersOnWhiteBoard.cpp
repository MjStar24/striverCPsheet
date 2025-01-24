#include<iostream>
using namespace std;
int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        cout<<2<<endl;
        // cout<<n-2<<" "<<n<<endl;
        // cout<<n-1<<" "<<n-1<<endl;
        // for(int i=n-3;i>=1;i--){
        //      cout<<i<<" "<<i+2<<endl;
        // }
        cout<<n<<" "<<n-1<<endl;
        for(int i=n-2;i>=1;i--){
            cout<<i+2<<" "<<i<<endl;
        }
    }
    return 0;
}