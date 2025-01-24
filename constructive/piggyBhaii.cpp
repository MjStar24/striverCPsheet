#include<iostream>
using namespace std;
#include<cmath>

int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int num=log2(r);
        cout<<num<<endl;
    }
    return 0;
}