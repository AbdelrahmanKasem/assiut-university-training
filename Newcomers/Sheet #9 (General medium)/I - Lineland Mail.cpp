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
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    for (int i = 0; i < n; i++) {
      if (i == 0) cout << abs(arr[i] - arr[i + 1]) << ' ';
      else if (i == n - 1) cout << abs(arr[i] - arr[i - 1]) << ' ';
      else cout << min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1])) << ' ';
      cout << max(abs(arr[i] - arr[0]), abs(arr[i] - arr[n - 1])) << endl;
    }
}
