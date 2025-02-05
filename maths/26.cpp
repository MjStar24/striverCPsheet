#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int n;cin>>n;
    while(n--){
        ll k,x;
        cin>>k>>x;
        cout<<x+(k-1)*9<<endl;
    }
    return 0;
}