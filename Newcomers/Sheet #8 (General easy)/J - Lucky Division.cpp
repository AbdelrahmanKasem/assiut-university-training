#include <iostream>
using namespace std;
 
bool isLucky(int n) {
    while (n > 0) {
      if (!(n % 10 == 7 || n % 10 == 4)) return false;
      n /= 10;
    }
    return true;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    if (isLucky(n)) {
      cout << "YES";
      return 0;
    }
    else {
      for (int i = 4; i <= n / 2; i++) {
        if (isLucky(i) && n % i == 0) {
            cout << "YES";
            return 0;
        }
      }
    }
    cout << "NO";
}
