#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,i=0,j=0;
    cin>>n;
    while(n>0){
        if(!(n%7)){
            i=n/7;
            break;
        }
        n-=4;
        j++;

        
    }
    
    if(n==0 || n%7==0){
        while(j--) cout<<4;
        while(i--) cout<<7;
    }else cout<<-1;
    

    return 0;
}