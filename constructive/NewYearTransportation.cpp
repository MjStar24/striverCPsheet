#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,t,j=1;string ans="NO";
    cin>>n>>t;
    vector<int> v(n-1);
    for(int i=0;i<n-1;i++) cin>>v[i];

    while(j<t){
        if((j+v[j-1])==t) ans="YES";
        j+=v[j-1];
    }

    cout<<ans;
 
    return 0;
}