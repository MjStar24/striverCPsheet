#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int n;
    cin>>n;
    int sumx=0,sumy=0,sumz=0;
    while(n--){
        int x,y,z;cin>>x>>y>>z;
        sumx+=x;sumy+=y;sumz+=z;
    }

    if(sumx==0 && sumy==0 && sumz==0) cout<<"YES";
    else cout<<"NO";
    
    return 0;
}