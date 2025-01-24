#include<iostream>
using namespace std;
int main(){
    string onTable;
    cin>>onTable;
    string hands;bool flag=false;
    int i=5;
    while(i--){
        cin>>hands;
        if(hands[0]==onTable[0] || hands[1]==onTable[1]){
            cout<<"YES";
            flag=true;
            break;
        }
    }
    if(!flag) cout<<"NO";
    return 0;
}