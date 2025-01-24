#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,total=0;
    cin>>n;
    for(int i=1;i<=n;i++){
        total+=(i*(n-i));
    }
    cout<<total+n;
    return 0;
} 