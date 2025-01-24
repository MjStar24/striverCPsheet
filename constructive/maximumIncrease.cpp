#include<iostream>
using namespace std;
int main(){
    // int i=0,j=1,maxi=0,t,curr,prev;
    // cin>>t;
    // t--;
    // cin>>prev;
    // while(t--){
    //     cin>>curr;
    //     if(curr>prev) j++;
    //     else if(prev==curr){
    //         j++;i++;
    //         maxi=max(j-i,maxi);
    //     }else{
    //         j++;
    //         maxi=max(j-i,maxi);
    //         i=j;
    //     }
        
    //     prev=curr;
    // }
    // maxi=max(j-i,maxi);
    // cout<<maxi;
    // return 0;

     int i = 0, j = 1, maxi = 0, t, curr, prev;
    cin >> t;
    t--;

    cin >> prev; // Input the first element
    while (t--) {
        cin >> curr; // Input the current element
        
        if (curr > prev) {
            j++; // Increment the length of the increasing sequence
        } else {
            maxi = max(maxi, j - i); // Update the maximum sequence length
            i = j; // Reset the start of the sequence
            j++; // Increment the end of the sequence
        }
        
        prev = curr; // Update previous element
    }

    maxi = max(maxi, j - i); // Final update for the sequence
    cout << maxi;
    return 0;


}