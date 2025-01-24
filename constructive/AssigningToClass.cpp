#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int ran=2*n;
        vector<int> v(ran);
        
        for(int i=0;i<ran;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        cout<<v[n]-v[n-1]<<endl;
    }
    return 0;
}