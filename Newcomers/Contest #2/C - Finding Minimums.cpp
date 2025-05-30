#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int n, k;
    cin >> n >> k;
 
    int minValue = INT_MAX;
 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < minValue) minValue = arr[i];
        if ((i + 1) % k == 0 || i == n - 1) {
            cout << minValue << ' ';
            minValue = INT_MAX;
        }
    }
}
