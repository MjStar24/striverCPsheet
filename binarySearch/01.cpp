#include<iostream>
#include<vector>
#include<algorithm>
#include<cmath>

#define ll long long

using namespace std;
int main(){
    string s;
    cin>>s;
    ll q1,q2,q3;
    cin>>q1>>q2>>q3;
    ll p1,p2,p3;
    cin>>p1>>p2>>p3;
    ll r;
    cin>>r;

    int a=0,b=0,c=0;
    for(char &ch:s){
        if(ch=='B') a++;
        else if(ch=='S') b++;
        else c++;
    }

    ll low=0,high=r+100;
    while(low <= high){
        ll mid=low+(high-low)/2;
        //mid gives us the number of hamburgers nigga

        ll z=0;
        ll r1=max(mid*a-q1,z);
        ll r2=max(mid*b-q2,z);
        ll r3=max(mid*c-q3,z);

        ll price=r1*p1+r2*p2+r3*p3;

        if(price<=r) low=mid+1;
        else high=mid-1;


    }

    cout<<high;

    return 0;
}