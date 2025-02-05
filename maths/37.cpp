#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;

bool check(int r,int g,int b,int w){
    if(r%2 + g%2 + b%2 + w%2 > 1)  return false;
    else return true;;
}
int main(){
    int t;cin>>t;
    while(t--){
        int r,g,b,w,odd=0,ev=0;
        cin>>r>>g>>b>>w;
        if(check(r,g,b,w)) cout<<"Yes"<<endl;
        else if(r > 0 && g > 0 && b > 0 && (check(r-1,g-1,b-1,w+3))) cout<<"Yes"<<endl;
        else cout<<"No"<<endl;

    }
    return 0;
}