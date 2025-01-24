#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n;string s,ans="NO",val="";
    cin>>n>>s;
    for(int i=1;i<s.length();i++){
        if(s[i-1]!=s[i]){
            ans="YES";
            val.push_back(s[i-1]);
            val.push_back(s[i]);
            break;
        }
    }
    cout<<ans<<endl;
    if(ans=="YES") cout<<val;
    return 0;
}