#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,x,y;
    cin>>n>>x>>y;
    bool left=true,right=true;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    for(int i=0;i<n;i++){
        bool left=true,right=true;
        for(int j=max(0, i - x);j<i;j++){
            if(v[j]<v[i]) left=false;
        }
        for(int j=i+1;j<=min(i+y,n-1);j++){
            if(v[j]<v[i]) right=false;
        }
        if(left && right){
            cout<<i+1;
            break;
        }
    }
    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// using namespace std;

// int main() {
//     int n, x, y;
//     cin >> n >> x >> y;
//     vector<int> v(n);
    
//     for (int i = 0; i < n; i++) {
//         cin >> v[i];
//     }

//     for (int i = 0; i < n; i++) {
//         bool left = true, right = true;

//         // Check x days before
//         for (int j = max(0, i - x); j < i; j++) {
//             if (v[j] <= v[i]) {
//                 left = false;
//                 break;
//             }
//         }

//         // Check y days after
//         for (int j = i + 1; j <= min(i + y, n - 1); j++) {
//             if (v[j] <= v[i]) {
//                 right = false;
//                 break;
//             }
//         }

//         if (left && right) {
//             cout << i + 1 << endl; // 1-based index
//             return 0;
//         }
//     }

//     return 0;
// }
