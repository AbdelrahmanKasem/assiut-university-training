#include <iostream>
#include <algorithm>
#include <cmath>
#include <limits.h>
#include <iomanip>
#define ll long long
#define mn INT_MIN
#define mx INT_MAX
#define lmx LLONG_MAX
#define lmn LLONG_MIN
#define noSync ios::sync_with_stdio(0); cin.tie(0);
using namespace std;
 
void solve() {
    int pow;
    cin >> pow;
    
    if (pow == 0) {cout << 1; return;}
    pow %= 4;
    if (pow == 1) cout << 8;
    else if (pow == 2) cout << 4;
    else if (pow == 3) cout << 2;
    else cout << 6;
}
 
int main() {
    noSync;
    int t = 1;
    // cin >> t;
    
    while (t--) {
      solve();
    }
}
