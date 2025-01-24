#include<iostream>
#include<unordered_map> 
using namespace std;

int main(){
    unordered_map<char,int> m;
    m['T']=4;m['C']=6;m['O']=8;m['D']=12;m['I']=20;
    int n,total=0;string s;
    cin>>n;
    while(n--){ 
        cin>>s;
        total+=m[s[0]];
    }
    cout<<total;
    return 0;
}