#include<iostream>
#include<vector>
#include<algorithm>
#include<unordered_map>
using namespace std;
int main(){
    int k;
    cin>>k;
    string s;
    cin>>s;
    bool flag=false;
    unordered_map<char,int> m;
    for(int i=0;i<s.length();i++){
        m[s[i]]++;
    }
    for(auto i:m){
        if(i.second%k!=0) {
            cout<<-1;
            flag=true;
            break;
        }
    }
    string sf="";
    if(!flag){
        for(auto i:m){
            for(int j=0;j<(i.second/k);j++) sf.push_back(i.first);
        }
        cout<<sf;
        for(int i=sf.length();i<s.length();i+=sf.length()){
            cout<<sf;
        }
    }

    return 0;
}