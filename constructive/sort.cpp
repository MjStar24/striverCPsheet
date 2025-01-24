#include <iostream>
using namespace std;

void printMin(int x,int y){
    cout<<min(x,y)<<" "<<max(x,y)<<endl;
}

int main(){
    int total;
    cin>>total;
    int i=0;
    while (i<total){
        int x,y;
        cin>>x;
        cin>>y;
        printMin(x,y);
        i++;
    }


    return 0;
}