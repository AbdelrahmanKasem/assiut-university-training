#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
 
        int t;
        cin >> t;
 
        int x, y;
        while (t--) {
                cin >> x >> y;
                if (x > y) swap(x, y);
 
                int i = (x % 2 == 0)? x + 1 : x + 2;
                long long result = 0;
                for (; i < y; i += 2) {
                        result += i;
                }
                cout << result << endl;
        }
}
