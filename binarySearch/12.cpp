#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include <iomanip>

#define ll long long

using namespace std;

bool check(int x,int k,vector<int> &v,int n,int oe){
    int ans=0;
    for(int i=0;i<n;i++){
        if(!oe){
            ans++;oe^=1;
        }else{
            if(v[i]<=x) {
                ans++;
                oe^=1;
            }
        }
    }
    return ans>=k;
}       

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> v(n);
    int low=0,high=0;
    for(int i=0;i<n;i++) {
        cin>>v[i];
        high=max(high,v[i]);
    }

    while(low<=high){
        int mid=low+(high-low)/2;
        if(check(mid,k,v,n,0) || check(mid,k,v,n,1)) high=mid-1;
        else low=mid+1;
    }
    cout<<low;
    return 0;
}