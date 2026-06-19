#include <bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        vector<long long> a;
        int n; cin >> n;
        for (int i = 0; i < n; i++){
            long long temp;
            cin >> temp;
            a.push_back(temp);
        }
        int y = 1;
        sort(a.rbegin(), a.rend());
        for (int i = 0; i < n - 2; i++){
            if (a[i] % a[i+1] != a[i+2]){
                y = 0;
                break;
            }       
        }
        if (y) cout << a[0] << " " << a[1] << "\n";
        else cout << -1 << "\n";
    }
}
