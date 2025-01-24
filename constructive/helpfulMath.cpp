#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int> m;
    int j=0;
    string s,n="";
    cin>>s;

    for(int i=0;i<s.size();i+=2){
        m[s[i]-'0']++;
    }
    for(auto i:m){
        int k=i.second;
        while(k--){
            s[j]=i.first+'0';
            j+=2;
        }
    }

    cout<<s;

    return 0;
}