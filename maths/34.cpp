#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        if(x>3) cout<<"YES"<<endl;
        else if(x==1) (y==1) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
        else (y<=3) ? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}