// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// #include<queue>

// #define ll long long

// using namespace std;

// ll n, k ,ans=-1;

// struct X{
//     ll a,b;
// };

// bool operator<(const X &x,const X &y){
//     return (ll)x.a*y.b > (ll)x.b*y.a;
// }


// vector<X> v(n);


// bool check(ll x){
//     priority_queue<X> q;
//     for(int i=0;i<n;i++){
//         q.push(v[i]);
//     }
//     for(int i=1;i<=k;i++){
//         X val=q.top();q.pop();
//         if(val.a<val.b*(i-1)) return 0;// abhi tak survive kar paya ki nahi jitna charge uspe tha.
//         val.a+=x;q.push(val);
//     }
//     return 1;
// }

// int main(){
//     cin>>n>>k;
//     v.resize(n);
//     for(int i=0;i<n;i++) cin>>v[i].a;
//     for(int i=0;i<n;i++) cin>>v[i].b;
//     ll low=0,high=2e12;
//     while (low<=high){
//         ll mid=low+(high-low)/2;
//         if(check(mid)){
//             ans=mid;
//             high=mid-1;
//         }else low=mid+1;
//     }
//     cout<<ans;
//     return 0;
// }


#include<bits/stdc++.h>
using namespace std;
using ll=int64_t;
struct X{ll x,y;}a[200013];
bool operator<(const X&x,const X&y){return (ll)x.x*y.y>(ll)y.x*x.y;}
ll n,k,l=0,r=2e12,m,rs=-1;
bool chk(ll x){
priority_queue<X>q;
for(int i=1;i<=n;i++)q.push(a[i]);
for(int i=1;i<=k;i++){
X p=q.top();q.pop();
if(p.x<p.y*(i-1))return 0;
p.x+=x,q.push(p);
}
return 1;
}
main(){
cin>>n>>k;
for(int i=1;i<=n;i++)cin>>a[i].x;
for(int i=1;i<=n;i++)cin>>a[i].y;
while(l<=r)m=(l+r)/2,chk(m)?rs=m,r=m-1:l=m+1;
cout<<rs<<'\n';
}