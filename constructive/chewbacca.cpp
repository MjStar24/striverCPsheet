#include<iostream>
using namespace std;

int main(){
    string s;
    cin>>s;
    int f=s[0]-'0';
    if(f==9) s[0]='9';
    else{
        if(f>4) s[0]=(9-f)+'0';
    }
    for(int i=1;i<s.size();i++){
        f=s[i]-'0';
        if(f>4) s[i]=(9-f)+'0';
    }

    cout<<s;
    return 0;
}