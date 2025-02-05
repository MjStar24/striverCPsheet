#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int t;cin>>t;
    while(t--){
        int n,m,k;
        cin>>n>>m>>k;
        int cards=n/k;
        if(m<=cards) cout<<m<<endl;
        else cout<<cards-((m-cards)%(k-1) ? ((m-cards)/(k-1)+1) : (m-cards)/(k-1))<<endl;
        
    }
    return 0;
}