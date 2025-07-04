#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    if (n > 0) cout << n;
    else {
      int lastDigit = n % 10;
      n /= 10;
      
      if (n % 10 < lastDigit) cout << n / 10 * 10 + lastDigit;
      else cout << n;
    }
}
