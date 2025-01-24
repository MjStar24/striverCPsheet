#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>> v(n);
    vector<int> ans;
    for(int i=0;i<n;i++){
        cin>>v[i].first;
        v[i].second=i;
    }
    sort(v.begin(),v.end());
    int i=0,total=0;
    while(i<n && total+v[i].first<=k ){
        total+=v[i].first;
        ans.push_back(v[i].second);
        i++;
    }
    cout<<i<<endl;
    for(int k=0;k<ans.size();k++){
        cout<<ans[k]+1<<" ";
    }
    
}