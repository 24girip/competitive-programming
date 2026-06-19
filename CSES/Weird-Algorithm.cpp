#include <iostream>
using namespace std;

int main(){
    long long n;
    cin >> n;
    while (n>1)
    {
        cout << n << " ";
        if (n%2 == 0) n /= 2;
        else n = n*3 + 1;
        //if(n<=1) break; 
    }
    cout << n << " ";
    cout << "\n";
}
