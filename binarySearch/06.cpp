#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;

bool check(ll op,vector<ll> &v,int n,int m){
    ll prev=0;
    for(int i=0;i<n;i++){
        if(v[i]>=prev){
            ll k=m-(v[i]-prev);
            if(k > op) prev=v[i];
        }else {
            if((prev-v[i])>op) return false;
        }
    }
    return true;
}

int main(){
    ll n,m;cin>>n>>m;
    vector<ll> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    ll low=0,high=4e5;
    ll ans=-1;
    while(low<=high){
        ll mid=low+(high-low)/2;
        if(check(mid,v,n,m)) {
            ans=mid;
            high=mid-1;
        }
        else low=mid+1;
    }
    cout<<low;
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <cmath>

// #define ll long long

// using namespace std;

// bool check(ll op, const vector<ll>& v, ll n, ll m) {
//     ll prev = 0;
//     for (ll i = 0; i < n; i++) {
//         if (v[i] >= prev) {
//             ll k = m - (v[i] - prev);
//             if (k > op)
//                 prev = v[i];
//         } else {
//             if ((prev - v[i]) > op) 
//                 return false;
//         }
//     }
//     return true;
// }

// int main() {
//     ll n, m;
//     cin >> n >> m;
//     vector<ll> v(n);
    
//     for (ll i = 0; i < n; i++) 
//         cin >> v[i];

//     ll low = 0, high = 4e5, ans = -1;

//     while (low <= high) {
//         ll mid = low + (high - low) / 2;
//         if (check(mid, v, n, m)) {
//             ans = mid;
//             high = mid - 1;
//         } else {
//             low = mid + 1;
//         }
//     }

//     cout << ans;
//     return 0;
// }
