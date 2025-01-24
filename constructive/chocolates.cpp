#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    // int n,total=0;
    // cin>>n;
    // n--;
    // int prev,curr;
    // cin>>curr;
    // total+=curr;
    // while(n--){
    //     prev=curr;
    //     cin>>curr;
    //     if(prev>1){
    //         total+=min(prev-1,curr);
    //         curr=min(prev-1,curr);
    //     }else curr=0;
    // }

    // cout<<total;
    
    int n;long long total=0;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];

    total+=v[n-1];
    for(int i=n-2;i>=0;i--){
        if(v[i+1]>1){
            total+=min(v[i+1]-1,v[i]);
            v[i]=min(v[i+1]-1,v[i]);
        }else v[i]=0;
        
    }

    cout<<total;

    return 0;
}