#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int total=0;
    int s;cin>>s;
    for(int i=5;i>=1;i--){
        total+=(s/i);
        s%=i;
    }
    cout<<total;
    
    return 0;
}