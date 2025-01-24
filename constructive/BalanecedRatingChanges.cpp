#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
using namespace std;
int main(){
    int n;
    cin>>n;
    int flag=1;
    while(n--){
        int t;
        cin>>t;
        if(t%2==0){
            cout<<t/2<<endl;
        }else {
            cout<<(t+flag)/2;
            flag*=-1;
            cout<<endl;
        }
    }

    
   
   

   
    return 0;
}