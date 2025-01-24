// #include<iostream>
// #include<vector>
// #include<algorithm>
// using namespace std;
// int main(){
//     int n,m,moves=0;cin>>n>>m; 
//     if(n==m) cout<<0;
//     else if(m%n || (m%2 && m%3)) cout<<-1;
//     else {
//         int val=m/n;
//             while(val!=1){
//             if(val%2==0) val/=2;
//             else val/=3;
//             moves++;
//         }
//         cout<<moves;
//     }
    
    
    
//     return 0;
// }


#include <iostream>
using namespace std;

int main() {
    int n, m, moves = 0;
    cin >> n >> m;

    if (m % n != 0) {
        cout << -1 << endl; // m is not a multiple of n
        return 0;
    }

    int val = m / n;

    // Reduce `val` by repeatedly dividing by 2 or 3
    while (val % 2 == 0) {
        val /= 2;
        moves++;
    }
    while (val % 3 == 0) {
        val /= 3;
        moves++;
    }

    // If `val` is not reduced to 1, transformation is not possible
    if (val != 1) {
        cout << -1 << endl;
    } else {
        cout << moves << endl;
    }

    return 0;
}
