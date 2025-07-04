#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    int n, k;
    cin >> n >> k;
    
    int result = 0;
    int x;
    while (n--) {
      bool arr[k + 1];
      fill(arr, arr + k + 1, false);
      int flag = true;
      
      cin >> x;
      while (x > 0) {
        if (x % 10 <= k) arr[x % 10] = true;
        x /= 10;
      }
      
      for (int i = 0; i <= k; i++) if (!arr[i]) flag = false;
      if (flag) result++;
    }
    
    cout << result;
}
