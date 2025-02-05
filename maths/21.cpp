#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    int ans=(n/2)*m;
    ans+=(n%2) ? m/2 : 0;
    cout<<ans;
    return 0;
}