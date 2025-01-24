#include<iostream>
using namespace std;

int main(){

    int total;
    cin>>total;
    int i=0;
    int count;
    while(i<total){
        count=0;
        string s;
        cin>>s;
        int j=0;
        while(j<s.length()){
            if(s[j]=='1'){
                while(s[j]!='0' && j<=s.length()-1){
                    j++;
                }
            if(j!=s.length()) {
                count++;
            }
            
            }
            j++;
        }
        cout<<count+1<<endl;
        i++;
    }

    return 0;
}