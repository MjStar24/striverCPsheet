#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;
    if(s[0]<=122 && s[0]>=97){
        s[0]='A'+(s[0]-'a');
    }
    cout<<s;
    return 0;
}