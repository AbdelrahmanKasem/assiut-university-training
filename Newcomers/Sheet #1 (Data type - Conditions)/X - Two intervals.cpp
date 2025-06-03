#include <iostream>
using namespace std;
 
int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
 
        int l1, r1, l2, r2;
        cin >> l1;
        cin >> r1;
        cin >> l2;
        cin >> r2;
 
        if (l1 == l2 && r1 == r2) cout << l1 << ' ' << r1;
        else if (r1 < l2) cout << -1;
        else if (r2 < l1) cout << -1;
        else if (l1 > l2 && l1 < r2 && r2 < r1) cout << l1 << ' ' << r2;
        else if (l2 > l1 && l2 < r1 && r1 < r2) cout << l2 << ' ' << r1;
        else if (l2 > l1 && r2 < r1) cout << l2 << ' ' << r2;
        else if (l1 > l2 && r1 < r2) cout << l1 << ' ' << r1;
        else if (l1 == r2 && r1 > l2) cout << l1 << ' ' << r2;
        else if (r1 == l2 && r2 > l1) cout << l2 << ' ' << r1;
        else if (l1 == l2 && r2 < r1) cout << l2 << ' ' << r2;
        else if (r1 == r2 && l2 > l1) cout << l2 << ' ' << r2;
        else if (l1 == l2 && r1 < r2) cout << l1 << ' ' << r1;
        else if (r1 == r2 && l1 > l2) cout << l1 << ' ' << r1;
        else cout << -1;
}
