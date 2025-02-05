#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        if(a==b) cout<<0<<endl;
        else {
            int diff=abs((b-a));
            (diff%10) ? cout<<diff/10+1<<endl : cout<<diff/10<<endl;
        }
    }
    return 0;
}