// #include<iostream>
// #include<vector>
// #include<algorithm>
// #include<cmath>
// using namespace std;
// int main(){
//     int n,m,k;
//     cin >>n>>m>>k;
//     long long maxi=0,val,smaxi=0;
//     while(n--){
//         cin>>val;
//         if(val>maxi){
//             smaxi=maxi;
//             maxi=val;
//         }else if(val > smaxi && val!=maxi){
//             smaxi=val;
//         }
//     }
//     cout<<((m/(k+1))*(maxi*k+smaxi)+((m%(k+1)) ? (m%(k+1))*maxi : 0));
//     return 0;
// }


#include<iostream>
#include<algorithm>
#include<cmath>
#include<vector>
using namespace std;

int main() {
   

    int n, m, k;
	cin >> n >> m >> k;
	
	vector<int> a(n);
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	sort(a.rbegin(), a.rend());
	
	cout << m / (k + 1) * 1ll * (a[0] * 1ll * k + a[1]) + m % (k + 1) * 1ll * a[0] << endl;

    return 0;
}
