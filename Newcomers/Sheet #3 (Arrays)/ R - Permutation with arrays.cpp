#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int a[n];
    int b[n];
 
    for (int i = 0; i < n; i++) cin >> a[i];
 
    for (int i = 0; i < n; i++) {
        cin >> b[i];
        for (int k = 0; k < n; k++) {
            if (a[k] == b[i]) {
                a[k] = 0;
                break;
            }
        }
    }
 
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            cout << "no";
            return 0;
        }
    }
 
    cout << "yes";
}
