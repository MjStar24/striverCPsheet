#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int n,prev=0,curr,energy=0,cost=0;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>curr;
        energy+=prev-curr;
        if(energy<0) {
            cost+=abs(energy);
            energy=0;
        }
        prev=curr;
    }
    cout<<cost;
    return 0;
}