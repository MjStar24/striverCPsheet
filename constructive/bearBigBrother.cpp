#include<iostream>
using namespace std;

int main(){
    int a,b,age=0;
    cin >>a>>b;

    while (a<=b){
        age++;
        a*=3;
        b*=2;
    }
    cout<<age;
    return 0;
}