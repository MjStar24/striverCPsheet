#include<iostream>
using namespace std;

int main(){
    int k,r;
    cin>>k>>r;
    int rem=k%10;
    if(rem==r) cout<<1<<endl;
    else{
        for(int i=1;i<=10;i++){
            if((rem*i)%10==r || (rem*i)%10==0) {
                cout<<i<<endl;
                break;
            }
        }
    }
    return 0;
}