#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    vector<int> v(4);
    cin>>v[0]>>v[1]>>v[2]>>v[3];
    int maxi=max({v[0],v[1],v[2],v[3]});
    for(int i=0;i<4;i++){
        if(v[i]!=maxi) cout<<maxi-v[i]<<" ";
    }
    return 0;
}