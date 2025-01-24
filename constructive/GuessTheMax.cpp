#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    // int t;
    // cin>>t;
    // while(t--){
    //     int n;
    //     cin>>n;
    //     vector<int> a(n);
    //     for(auto &c:a) cin>>c;
    //     sort(a.begin(),a.end());
    //     cout<< a[1]-1 <<endl;
    // }
    vector<string> fruits = {"manas", "chanchal", "soffia"};
    sort(fruits.begin(), fruits.end());
    for (auto i : fruits)
        cout << i << " ";
    return 0;
}

