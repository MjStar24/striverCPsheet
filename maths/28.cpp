#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    while(n--){
        int sum=0,ev=0,zero=0;
        cin>>s;
        for(int i=0;i<s.length();i++){
            sum+=s[i]-'0';
            if((s[i]-'0')==0) zero++;
            if((s[i]-'0')%2==0) ev++;
        }
        if(zero==s.length()) cout<<"red"<<endl;
        else if(zero && ev>1 &&  sum%3==0){
            cout<<"red"<<endl;
        }else cout<<"cyan"<<endl;
    }
    return 0;
}