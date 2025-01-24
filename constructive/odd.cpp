#include<iostream>
#include<vector>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++) cin >> v[i];

        int countev = 0, countod = 0;
        for(int i = 0; i < n; i++){
            if(v[i] % 2 == 1) countod++;
            else countev++;
        }

        // Check if it's possible to get an odd sum
        if(countod > 0 && (countod % 2 == 1 || countev > 0)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}