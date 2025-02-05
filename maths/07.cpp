#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        int row=n/2;
        int col=m/2;
        (n%2) ? row=row*m+((m%2) ? m/2+1 : m/2) : row=row*m;
        (m%2) ? col=col*n+((n%2) ? n/2+1 : n/2) : col=col*n;
        
        cout<<min(row,col)<<endl;
    }
    return 0;
}