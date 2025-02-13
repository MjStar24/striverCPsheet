
#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;

int main() {
    ll n, x, y;
    string s;
    cin >> n;
    cin >> s;
    cin >> x >> y;

    vector<ll> px(n + 1, 0); // stores current x after ith index of the string
    vector<ll> py(n + 1, 0); // stores current y after ith index of the string

    for (int i = 1; i <= n; i++) {
        px[i] = px[i - 1];
        py[i] = py[i - 1];
        if (s[i - 1] == 'U') py[i]++;
        else if (s[i - 1] == 'D') py[i]--;
        else if (s[i - 1] == 'L') px[i]--;
        else if (s[i - 1] == 'R') px[i]++;
    }

    ll destx = px[n], desty = py[n];

    ll low = 0, high = n, ans = -1;

    while (low <= high) {
        ll mid = low + (high - low) / 2; // mid is the length of the subsegment
        bool found = false;
        for (int i = 0; i <= n - mid; i++) {
            ll newx = destx - (px[i + mid] - px[i]);
            ll newy = desty - (py[i + mid] - py[i]);

            ll xreq = x - newx, yreq = y - newy;

            if ((abs(xreq) + abs(yreq)) <= mid && (mid - (abs(xreq) + abs(yreq))) % 2 == 0) {
                found = true;
                break;
            }
        }

        if (found) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << ans;
    return 0;
}