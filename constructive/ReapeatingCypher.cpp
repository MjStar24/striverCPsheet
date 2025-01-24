#include<iostream>
using namespace std;
int main(){
    int i=0,j=1;
    int n;
    cin>>n;
    string s;
    cin>>s;
    
    while(i<n){
        cout<<s[i];
        i+=j;
        j++;
    }
    return 0;
}