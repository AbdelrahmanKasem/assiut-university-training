#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int n, q;
    cin >> n >> q;
 
    long long arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
 
        if (i != 0) arr[i] += arr[i - 1];
    }
 
    int l, r;
    if (l > r) swap(l, r);
    while (q--) {
        cin >> l >> r;
        l--;
        r--;
        if (l == 0) cout << arr[r];
        else cout << arr[r] - arr[l - 1];
        cout << endl;
    }
}
