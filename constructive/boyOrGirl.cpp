#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v(26,0);
    string s;cin>>s;
    int total=0;
    for(int i=0;i<s.size();i++){
        if(!v[s[i]-'a']){
            total++;
            v[s[i]-'a']=1;
        }
    }
    if(total%2) cout<<"IGNORE HIM!";
    else cout<<"CHAT WITH HER!";
    
    return 0;
}