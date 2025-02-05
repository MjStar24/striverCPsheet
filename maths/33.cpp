#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<iomanip>

#define ll long long

using namespace std;
int main(){
    double h,l;
    cin>>h>>l;
    cout<<fixed<<setprecision(13)<<(l*l-h*h)/(2*h);
    //fixed and setprecision used to fix the no. of decimal places to be displayed on terminal
    return 0;
}