#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int mainD = 0;
    int secondD = 0;
    int arr[n][n];
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cin >> arr[row][col];
            if (row == col) mainD += arr[row][col];
            if (col == n - row - 1) secondD += arr[row][col];
        }
    }
 
    cout << abs(mainD - secondD);
}
