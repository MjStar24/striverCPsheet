#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b,c;
    while(t--){
        cin>>a>>b>>c;
        int sum=a+b+c;
        int mini=min({a,b,c});
        if(sum/9 > 0 && !(sum%9) && mini>=sum/9) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}