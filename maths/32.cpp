#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int n,m,a;
    cin>>n>>m>>a;
    int row=(n%a) ? n/a+1 : n/a;
    int col=(m%a) ? m/a+1 : m/a;
    cout<<row*1ll*col;
    return 0;
}