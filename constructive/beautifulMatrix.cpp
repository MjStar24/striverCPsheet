#include<iostream>
using namespace std;

int main(){
    int x=1,y=1,val;
    for(int i=1;i<=5;i++){
        for(int j=1;j<=5;j++){
            cin>>val;
            if(val==1){
                x=i;y=j;
            }
        }
    }
    cout << abs(3-x)+abs(3-y);
    return 0;
}