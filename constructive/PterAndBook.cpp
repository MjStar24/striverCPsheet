#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n,total=0,val,j=0;
    vector<int> v(7);
    cin>>n;
    val=n;
    for(int i=0;i<7;i++){
        cin>>v[i];
        total+=v[i];
    }
    if(n>total){
        val=n%total;
    }
    
    while(val>0){
        val-=v[j];
        j++;
    }
    if(n%total==0){
        int k=6;
        while(k>=0){
            if(v[k]!=0) {
                cout<<k+1;
                break;
            }
            k--;
        }
    }
    else cout<<j;
    return 0;
}