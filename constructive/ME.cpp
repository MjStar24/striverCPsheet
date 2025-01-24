#include<iostream>
using namespace std;

int main(){
    int n,i=1;
    cin>>n;
    while(n>0){
        if(i%2) {
            if(n%2==0) n-=n;
            else {
                n-=(n-1);
                
            }
            if(n<=0) cout<<"Mahmoud";
        }else{

            if(n%2==0) n-=(n-1);
            else {
                n-=n;
                
            }
            if(n<=0) cout<<"Ehab";
        }
        i++;
    }

    return 0;
}