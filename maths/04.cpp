#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,odd=0,even=0;
        cin>>n;
        while(n--){
            int val;
            cin>>val;
            if(val%2) odd++;
            else even++;
        }
        if(!odd) cout<<"NO"<<endl;
        else if(odd && odd%2) cout<<"YES"<<endl;
        else if(even && odd) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}