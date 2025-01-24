#include<iostream>
using namespace std;



int main(){
  int count = 1,i=1;
  int tt,initial;
  cin >> tt;
  cin >> initial;
  bool ok=false;
  while (i<tt){
    int val;
    cin>>val;
    if(val>initial) {
        ok=true;
        i++;
        break;
    }
    i++;
  }
  if(ok) cout <<i;
  else cout<<-1;
  return 0;
}