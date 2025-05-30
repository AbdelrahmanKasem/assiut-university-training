#include <iostream>
#include <math.h>
#include <limits>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int minValue = INT_MAX;
    int maxValue = INT_MIN;
    int minIdx = -1;
    int maxIdx = -1;
 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIdx = i;
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIdx = i;
        }
    }
 
    swap(arr[maxIdx], arr[minIdx]);
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
}
