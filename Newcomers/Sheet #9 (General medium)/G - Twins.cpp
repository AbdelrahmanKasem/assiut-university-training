#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int arr[n];
    long long arr_sum = 0;
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      arr_sum += arr[i];
    }
    
    sort(arr, arr + n);
    
    long long sum = 0;
    int counter = 0;
    for (int i = n - 1; i >= 0; i--) {
      sum += arr[i];
      counter++;
      if (sum > arr_sum - sum) {
        cout << counter;
        return 0;
      }
    }
    cout << 0;
}
