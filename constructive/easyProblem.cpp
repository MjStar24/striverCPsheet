#include<iostream>
using namespace std;

int main(){
    int n,val;
    bool flag=true;
    cin>>n;
    while(n--){
        cin>>val;
        if(val==1) {
            cout<<"HARD";
            flag=false;
            break;
        }
    }
    if(flag) cout<<"EASY";
    return 0;
}