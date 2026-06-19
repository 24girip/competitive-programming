#include <iostream>
using namespace std;

void stepcount(int o, int n){
    for (int i = o; i <= n; i+=2){
        cout << i << " ";
    }
}
int main(){
    std::ios::sync_with_stdio(false);
    std::cin.tie(NULL);
    int n; cin >> n;
    if (n > 1 && n <= 3){
        cout << "NO SOLUTION\n";
    }
    else {
        stepcount(2,n);
        stepcount(1,n);
        cout << "\n";
    }
}
