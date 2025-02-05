#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,val,odd=0,even=0;
        cin>>n;
        for(int i=0;i<n;i++){
            cin>>val;
            (i%2 && val%2==0) ? odd++ : odd+=0;
            (i%2==0 && val%2) ? even++ : even+=0;
        }
        if(odd==even) cout<<odd<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}