#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int m;
        cin>>m;
        m%2 ? cout<<m/2+1<<endl : cout<<m/2<<endl;
    }
    return 0;
}