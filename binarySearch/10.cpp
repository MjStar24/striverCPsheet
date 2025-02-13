#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include <iomanip>

#define ll long long

using namespace std;

ll n, t;

struct taps{
    double a,t;
};

bool comp(const taps&x,const taps&y){
    return x.t<y.t;
}

bool check(double x,vector<taps>&a){
    double temp=x*t;
    double res1=x,res2=x,low=0,high=0;
    for(int i=0;i<n;i++){
        if(res1>a[i].a) {
            low+=a[i].a*a[i].t;
            res1-=a[i].a;
        }
        else {
            low+=res1*a[i].t;break;
        }
    }

    if(temp<low) return false;
    for(int i=n-1;i>=0;i--){
        if(res2>a[i].a) {
            high+=a[i].a*a[i].t;
            res2-=a[i].a;
        }
        else {
            high+=res2*a[i].t;break;
        }
    }
    if(temp>high) return false;

    return true;

}

int main(){
    cin>>n>>t;
    vector<taps> a(n);
    double low=0,high=0,ans=0;
    for(ll i=0;i<n;i++){
        cin>>a[i].a;
        high+=a[i].a;
    }
    for(ll i=0;i<n;i++){
        cin>>a[i].t;
    }
    sort(a.begin(),a.end(),comp);

    while(high-low>1e-7){
        double mid=low+(high-low)/2.0;
        if(check(mid,a)){
            ans=mid;
            low=mid;
        }else high=mid;
    }

    cout<<fixed<<setprecision(12)<<ans<<endl;
    return 0;
}

