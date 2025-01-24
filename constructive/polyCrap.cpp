#include<iostream>
using namespace std;
#include<algorithm>
#include<vector>

int main(){

    int t,a,b,c,n;
    vector<int> temp(3);
    cin>>t;
    while(t--){
        cin>>temp[0]>>temp[1]>>temp[2]>>n;
        sort(temp.begin(),temp.end());
        a=temp[0];b=temp[1];c=temp[2];
        n-=(2*c-a-b);
        if(n<0 || n%3 != 0) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
    }


    return 0;

}