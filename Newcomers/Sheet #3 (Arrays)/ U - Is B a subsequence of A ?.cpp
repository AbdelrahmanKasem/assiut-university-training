#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int pointer = 0;
 
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    int b[m];
    for (int i = 0; i < m; i++) {
        cin >> b[i];
 
        for (; pointer < n; pointer++) {
            if (b[i] == a[pointer]) {
                pointer++;
                break;
            }
            if (pointer == n - 1) {
                cout << "NO";
                return 0;
            }
        }
 
        if (pointer == n && i != m - 1) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}
