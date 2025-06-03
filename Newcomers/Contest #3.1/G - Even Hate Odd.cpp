#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
    
    long long arr[n] = { 0 };
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    sort(arr, arr + n);
    
    long long result = 0;
    
    for (int i = n - 1; k > 0; i--) {
        if (arr[i] >= 0) result += arr[i];
        k--;
    }
    
    cout << result;
}
