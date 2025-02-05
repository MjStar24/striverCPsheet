#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int t,a,b,c,x,y,z;
    cin>>t;
    while(t--){
        cin>>a>>b>>c;
        z=pow(10,c-1);
        x=z,y=z;
        while(to_string(x).size()<a) x*=2;
        while(to_string(y).size()<b) y*=3;

        cout<<x<<" "<<y<<endl;
    }
    return 0;
} 