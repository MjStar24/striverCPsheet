#include<iostream>
using namespace std;

int main(){
    int n,k,g1;
    cin >> n;
    cin >> k;
    cin >> g1;
    int attraction = 1,i=1;
    
    int sum=g1;
    while(i<n){
        int g;
        cin>>g;
        if(!(k-g1>=g)){
            attraction++;
        }else {
            sum+=g;
        }
        if(sum==k){
            sum=0;
            attraction++;
        }
        g1=g;
        if(g+g1==k) g1=0;
        
        i++;
    }
    cout<<attraction;

    return 0;
}