

#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
using namespace std;
 
bool is_prime(int n) {
    if (n == 1) return false;
    if (n == 2) return true;
    
    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) return false;
    }
    return true;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m;
    cin >> n >> m;
    
    for (int i = n + 1; i < m; i++) {
      if (is_prime(i)) {
        cout << "NO";
        return 0;
      }
    }
    
    cout << (is_prime(m) ? "YES" : "NO");
}
