#include <iostream>
#include <math.h>
#include <limits>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    int n;
 
    while (t--) {
        cin >> n;
 
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
 
        int maxValue = INT_MIN;
        for (int i = 0; i < n; i++) {
            for (int k = i; k < n; k++) {
                for (int j = i; j <= k; j++) {
                    if (arr[j] > maxValue) maxValue = arr[j];
                }
                cout << maxValue << ' ';
                maxValue = INT_MIN;
            }
        }
        cout << endl;
    }
}
