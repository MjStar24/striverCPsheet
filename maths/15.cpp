#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int k,r;
    cin>>k>>r;
    int val=k%10;
    if(val==r || val==0) cout<<1;
    else{
        for(int i=2;i<=10;i++){
            int newRem=(val*i)%10;
            if( newRem == r || newRem==0) {
                cout<<i;break;
            }
        }
    }
    return 0;
}