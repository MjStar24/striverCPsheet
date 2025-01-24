#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string t1,t2;
    cin>>t1>>t2;

    
    int hour1=int((t1[0]-'0'))*10 + int(t1[1]-'0');
    int hour2=(t2[0]-'0')*10+t2[1]-'0';

  
    int min1=(t1[3]-'0')*10+t1[4]-'0';
    int min2=(t2[3]-'0')*10+t2[4]-'0';

    int totalmins=(hour1*60+min1+hour2*60+min2)/2;
    cout<<((totalmins/60)/10) % 10;
    cout<<(totalmins/60)%10;
    cout<<":";
    cout<<((totalmins%60)/10) % 10;
    cout<<(totalmins%60)%10;

    return 0;
}