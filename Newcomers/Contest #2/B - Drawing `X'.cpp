#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            if (row == n / 2 && col == n / 2) cout << 'X';
            else if (row == col) cout << '\\';
            else if (col == n - row - 1) cout << '/';
            else cout << '*';
        }
        cout << endl;
    }
}
