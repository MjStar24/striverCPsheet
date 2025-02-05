#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;

int gcd(int a,int b){
    if(b==0) return a;
    return gcd(b,a%b);
}

string mul(string s,int times){
    string n="";
    while(times--) n+=s;
    return n;
}


int main(){
    int q;
    cin>>q;
    while(q--){
        string s,t;
        cin>>s>>t;
        int a=s.length(),b=t.length();
        int lcm=a*b/gcd(a,b);
        if(mul(s,lcm/a)==mul(t,lcm/b)) cout<<mul(s,lcm/a)<<endl;
        else cout<<-1<<endl;
    }
    return 0;
}