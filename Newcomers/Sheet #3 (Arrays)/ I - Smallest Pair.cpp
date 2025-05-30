#include <iostream>
#include <math.h>
#include <limits>
using namespace std;
 
int main() {
    int t, n;
    cin >> t;
 
    while (t--) {
        cin >> n;
 
        int minPair = INT_MAX;
 
        int arr[n];
        for (int i = 0; i < n; i++) cin >> arr[i];
 
        for (int i = 0; i < n; i++) {
            for (int k = i + 1; k < n; k++) {
                if (arr[i] + arr[k] + k - i < minPair)
                    minPair = arr[i] + arr[k] + k - i;
            }
        }
        cout << minPair << endl;
    }
}
