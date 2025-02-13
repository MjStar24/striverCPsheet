#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>

#define ll long long

using namespace std;

ll get(ll n) {
    ll val = 0;
    for (ll k = 2; (k * k * k) <= n; k++) {  // Fixed condition to include k^3 == n case
        val += (n / (k * k * k));
    }
    return val;
}

int main() {
    ll m;
    cin >> m;
    
    ll low = 0, high = 1e18, ans = -1;
    while (low <= high) {
        ll mid = low + (high - low) / 2;
        ll val = get(mid);
        
        if (val == m) ans = mid;  // Store the answer but continue searching for the smallest valid number
        if (val >= m) high = mid - 1;
        else low = mid + 1;
    }
    
    cout << ans << endl;
    return 0;
}
