#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n<k){
            cout<<((k%n) ? k/n+1 : k/n)<<endl;
        }else cout<<((n%k) ? 2 : 1)<<endl;
    }
    return 0;
}