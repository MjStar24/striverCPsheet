#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    cin >> s;

    int val = 0;
    bool lucky = true,fl=false;

    for (int i=0;i<s.size();i++){
        if(s[i]=='7' || s[i]=='4') {
            val++;
            fl=true;
        }
    }
    // cout<<val<<endl;
    while(val) {
        int rem = val % 10;
        // cout<<rem<<endl;
        if(rem != 4 && rem != 7) {
            lucky = false;
            break;
        }
        val /= 10;
    }

    if(lucky && fl) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

    return 0;
}
