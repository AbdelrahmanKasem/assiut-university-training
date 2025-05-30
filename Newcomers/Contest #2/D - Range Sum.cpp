#include <iostream>
using namespace std;
 
int main() {
    int t; cin >> t;
 
    while (t--) {
        long long int l, r; cin >> l >> r;
        long long int mi = min(l, r);
        long long int ma = max(l, r);
        long long sum = ma * (ma + 1) / 2 - (mi - 1) * mi / 2;
        cout << sum << endl;
    }
}
