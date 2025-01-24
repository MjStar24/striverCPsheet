#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string p,h;
        cin>>p>>h;
        bool found=false;
        sort(p.begin(),p.end());

        if (h.length() < p.length()) {
            cout << "NO" << endl;
            continue;
        }

        for(int i=0;i<=h.length()-p.length();i++){
            string sub=h.substr(i,p.length());
            sort(sub.begin(),sub.end());
            if(sub==p){
                cout<<"YES"<<endl;
                found=true;
                break;
            }
        }
        if(!found) cout<<"NO"<<endl;
    }
    return 0;
}