#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<int> a(n);
    vector<int> b(n);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<n;i++) cin>>b[i];

    int low=0,high=2000;
    while(low<=high){
        int mid=low+(high-low)/2;
        //mid is the no. of cookies made by him
        int totalgrams=0;
        for(int i=0;i<n;i++){
            totalgrams+=max(mid*a[i]-b[i],0);
        }

        if(totalgrams<=k) low=mid+1;

        else high=mid-1;
    }

    cout<<high;//low might overshoot so high is a safe choice
    
    return 0;
}