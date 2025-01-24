// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
//     vector<int> after(100,0);
//     vector<int> before(100,0);
//     int t,i=0,j,total;string s;
//     cin>>t;
//     while(t--){
//         total=0;
//         cin>>s;
//         while(i<100){
//             if(s[i]=='1'){
//                 break;
//             }
//             i++;
//         }
//         j=s.length()-1;
//         while(j>=0){
//             if(s[j]=='1'){
//                 break;
//             }
//             j--;
//         }
//         while(i<s.length()) before[i++]=1;
//         while (j>=0) after[j--]=1;

//         for(int k=0;k<s.length();k++){
//             if(s[k]=='0'){
//                 if(after[k] && before[k]) total++; 
//             }
//         }
//         cout<<total<<endl;
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> after(100, 0);
    vector<int> before(100, 0);
    int t, i, j, total;
    string s;
    
    cin >> t;
    while (t--) {
        total = 0;
        cin >> s;
        i = 0;

        // Find the first occurrence of '1'
        while(i<100){
            after[i]=0;
            before[i]=0;
            i++;
        }
        i=0;
        while (i < s.length()) {
            if (s[i] == '1') {
                break;
            }
            i++;
        }

        j = s.length() - 1;

        // Find the last occurrence of '1'
        while (j >= 0) {
            if (s[j] == '1') {
                break;
            }
            j--;
        }

        // Mark positions for "before" and "after" vectors
        while (i < s.length()) before[i++] = 1;
        while (j >= 0) after[j--] = 1;

        // Count zeros that are surrounded by ones
        for (int k = 0; k < s.length(); k++) {
            if (s[k] == '0') {
                if (after[k] && before[k]) total++;
            }
        }

        cout << total << endl;
    }

    return 0;
}
