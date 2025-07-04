#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    short int n;
    cin >> n;
    
    int maxIdx, minIdx;
    int maxVal = INT_MIN;
    int minVal = INT_MAX;
    short int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] > maxVal) {
        maxVal = arr[i];
        maxIdx = i;
      }
      if (arr[i] <= minVal) {
        minVal = arr[i];
        minIdx = i;
      }
    }
    
    if (maxIdx > minIdx) maxIdx--;
    
    cout << maxIdx + (n - minIdx - 1);
}
