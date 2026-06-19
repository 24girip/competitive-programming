#include <iostream>
using namespace std;

int main(){
    int t; cin >> t;
    while(t--){
        int n, x, y, z;
        cin >> n >> x >> y >> z;
        int a, b = 0;
        a = (n+x+y-1)/(x+y);
        while (n > 0){
            n -= x;
            if (z<=0){ n -= 10*y;}
            else z--;
            b++;
        }
        cout << min(a, b) << endl;
    }
}
