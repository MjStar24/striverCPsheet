#include<iostream>
using namespace std;

int main(){
    int n, k, l, c, d, p, nl, np;
    cin>>n>>k>>l>>c>>d>>p>>nl>>np;

    int drinks=(k*l)/nl/n;
    int slice=(c*d)/n;
    int sugar=(p/np)/n;

    cout<<min(drinks,min(slice,sugar));
    return 0;
}