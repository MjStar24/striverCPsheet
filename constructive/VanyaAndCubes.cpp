#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=0,val=0;
    while(n>=val){
        i++;
        val=((i*(i+1))/2);
        n-=val;
        val=(((i+1)*(i+2))/2);
    }
    cout<<i;
    return 0;
}