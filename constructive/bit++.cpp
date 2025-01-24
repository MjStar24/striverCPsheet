#include<iostream>
using namespace std;


int main(){
    int n;
    string op;
    cin>>n;
    int x=0;
    while(n--){
        cin>>op;
        if(op[1]=='+'){
            x++;
        }else x--;
    }
    cout << x;
    return 0;
}