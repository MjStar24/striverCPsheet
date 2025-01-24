#include<iostream>
#include<unordered_map>
using namespace std;

int main(){
    int n,val;
    unordered_map<int,int> m;
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>val;
        m[val]=i;
    }
    for(int i=1;i<=n;i++){
        cout<<m[i]<<" ";
    }
    return 0;
}