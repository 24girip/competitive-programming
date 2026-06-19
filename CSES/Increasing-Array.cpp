#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n; cin >> n;
    long long ans = 0;
    vector<long long>arr(n);
    for (int i = 0; i < n; i++){
        long long temp; cin >> temp;
        arr[i] = temp; 
    }
    
    for (int i = 1; i < n; i++){
        if (arr[i] < arr[i-1]){
            ans += arr[i-1] - arr[i];
            arr[i] = arr[i-1];
        }
    }
    cout << ans << "\n";
}
