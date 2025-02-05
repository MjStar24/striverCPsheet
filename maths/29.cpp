#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int w,h,k,val;
        cin>>w>>h;
        cin>>k;
        int left,right;
        for(int i=0;i<k;i++){
            cin>>val;
            if(i==0) left=val;
            if(i==k-1) right=val;
        }
        ll a1=(right-left)*1ll*h;

        cin>>k;
        for(int i=0;i<k;i++){
            cin>>val;
            if(i==0) left=val;
            if(i==k-1) right=val;
        }

        ll a2=(right-left)*1ll*h;


        cin>>k;
        for(int i=0;i<k;i++){
            cin>>val;
            if(i==0) left=val;
            if(i==k-1) right=val;
        }

        ll a3=(right-left)*1ll*w;

        cin>>k;
        for(int i=0;i<k;i++){
            cin>>val;
            if(i==0) left=val;
            if(i==k-1) right=val;
        }

        ll a4=(right-left)*1ll*w;
        cout<<max({a1,a2,a3,a4})<<endl;
    }

    
    return 0;
}