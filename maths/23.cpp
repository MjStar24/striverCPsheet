 
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    vector<int> v(k, 0);
 
    // Count frequency of each drink type
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        v[val - 1]++;
    }
 
    // Sort drink type counts in ascending order
    sort(v.begin(), v.end());
 
    int sets = (n + 1) / 2; // ⌈n/2⌉ sets needed
    int i = k - 1, no = 0;
 
    while (sets > 0 && i >= 0) {
        int pairs = v[i] / 2;  // Maximum full pairs possible
        
            no += pairs * 2; // Each pair gives two satisfied students
            sets -= pairs;    // Reduce required sets
        
        i--;
    }
 
    // If there are still sets left, we can use single portions from remaining drinks
    i = k - 1;
    while (sets > 0 && i >= 0) {
        if (v[i] % 2 == 1) { // Check if there's an extra portion
            no++;
            sets--;
        }
        i--;
    }
 
    cout << no << endl;
    return 0;
}