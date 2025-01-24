#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int t,val=0;
    string n;
    cin>>t;
    while(t--){
        val=0;
        cin>>n;
        for(int i=0;i<n.size();i++){
            if(n[i]-'0'>0) val++;
        }
        cout<<val<<endl;
        for(int i=0;i<n.size();i++){
            if(n[i]-'0'>0) cout<<(n[i]-'0')*pow(10,n.size()-i-1)<<" ";
        }
        


    }
    return 0;
}