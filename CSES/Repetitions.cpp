#include <iostream>
using namespace std;

int main(){
    string s; cin >> s;
    int len=1; int maks = 1; char cur = s[0];
    for (int i = 1; i <(int) s.length(); i++){
        if (s[i] == cur){
            len++;
        }
        else {
            cur = s[i];
            len = 1;
        }
        maks = len > maks ? len : maks;
    }
    cout << maks << "\n";
}
