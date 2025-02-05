#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        n-=2;
        if(n<0) n=0;
        int floor=n/x;
        if(n%x) cout<<floor+2<<endl;
        else cout<<floor+1<<endl;
    }
    return 0;
}