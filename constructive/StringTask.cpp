#include<iostream>
using namespace std;
int main(){
    string s,ans="";
    cin>>s;
    for(int i=0;i<s.length();i++){
        if(s[i]!='a' && s[i]!='e' && s[i]!='i' && s[i]!='o' && s[i]!='u' && s[i]!='y' && s[i]!='Y' && s[i]!='A' && s[i]!='E' && s[i]!='I' && s[i]!='O' && s[i]!='U'){
            if(s[i]>=65 && s[i]<=90){
                ans.push_back('.');
                ans.push_back('a'+(s[i]-'A'));
            }else{
                ans.push_back('.');
                ans.push_back(s[i]);
            }
        }
    }
    cout<<ans;
    return 0;
}