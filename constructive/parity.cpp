#include<iostream>
using namespace std;
#include<vector>

int main(){
    int t,n;
    cin>>t;
    while(t--){
        cin>>n;
        vector<int> v(n);
        int countev=0,countod=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(i%2 != v[i]%2){
                if(v[i]%2==0) countev++;
                else countod++;
            }
        }
        if(countev==countod) cout<<countev<<endl;
        else cout<<-1<<endl;
    }


    return 0;
}