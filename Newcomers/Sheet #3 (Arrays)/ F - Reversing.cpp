#include <iostream>
#include <math.h>
#include <limits>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    int minIdx = 0;
 
    // Using selection sort algorithm
    for (int i = 0; i < n - 1; i++) {
        minIdx = i;
 
        for (int k = i + 1; k < n; k++) {
            if (arr[k] < arr[minIdx]) minIdx = k;
        }
        swap(arr[minIdx], arr[i]);
    }
 
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
}
