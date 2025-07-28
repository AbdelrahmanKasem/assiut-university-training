#include <iostream>
#include <limits.h>
#include <algorithm>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int arr[50];
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
 
    sort(arr, arr + m);
 
    int minDiff = INT_MAX;
 
    for (int main = 0; main <= m - n; main++) {
        int diff = arr[main + n - 1] - arr[main];
        if (diff < minDiff) {
            minDiff = diff;
        }
    }
 
    cout << minDiff;
}
