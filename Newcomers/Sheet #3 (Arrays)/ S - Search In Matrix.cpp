#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int arr[n][m];
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            cin >> arr[row][col];
        }
    }
 
    int x;
    cin >> x;
 
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < m; col++) {
            if (x == arr[row][col]) {
                cout << "will not take number";
                return 0;
            }
        }
    }
 
    cout << "will take number";
}
