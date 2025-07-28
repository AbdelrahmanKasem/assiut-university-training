#include <iostream>
#include <algorithm>
#include <cmath>
#include <limits.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int arr[1000000] = { 0 };
    
    int maxVal = INT_MIN;
    int x;
    for (int i = 0; i < n; i++) {
      cin >> x;
      arr[x]++;
      if (x > maxVal) maxVal = x;
    }
    
    int count = 0;
    for (int i = 0; i <= maxVal; i++) {
      if (arr[i] > 1) count += arr[i] - 1;
    }
    if (count) cout << count;
    else cout << -1;
}
