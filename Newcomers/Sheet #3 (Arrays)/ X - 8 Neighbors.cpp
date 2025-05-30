#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    char arr[n][m];
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cin >> arr[row][col];
        }
    }
 
    int x, y, counter = 0;
    cin >> x >> y;
 
    x--;
    y--;
 
    for (int row = x - 1; row <= x + 1; row++) {
        for (int col = y - 1; col <= y + 1; col++) {
            if (row == x && col == y) continue;
            if (row >= 0 && row < n && col >= 0 && col < m) {
                if (arr[row][col] != 'x') {
                    cout << "no";
                    return 0;
                }
            }
        }
    }
 
    cout << "yes";
}
