#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int c,sum;
        cin>>c>>sum;
        int val=sum/c;
        cout<<(sum%c)*(val+1)*(val+1)+(c-sum%c)*val*val<<endl;

    }

    return 0;
}