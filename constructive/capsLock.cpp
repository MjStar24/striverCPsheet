#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string s;bool flag=true;
    cin>>s;
    for(int i=1;i<s.length();i++){
        if(!(s[i]>=65 && s[i]<=90)) flag=false;
    }
    if(flag) {
        for(int i=0;i<s.length();i++){
            int val=0;
            if(s[i]>=65 && s[i]<=90) {
                val=s[i]-'A';
                s[i]='a'+val;
            }
            else {
                val=s[i]-'a';
                s[i]='A'+val;
            }
            
        }
    }

    


    cout<<s;
    return 0;
}