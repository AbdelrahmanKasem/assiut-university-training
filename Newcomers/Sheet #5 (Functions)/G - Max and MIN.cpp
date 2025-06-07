#include <iostream>
#include <math.h>
#include <limits>
#include <string>
using namespace std;
 
string MaxMin(int n, int arr[]) {
    int maxValue = INT_MIN;
    int minValue = INT_MAX;
 
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxValue) maxValue = arr[i];
        if (arr[i] < minValue) minValue = arr[i];
    }
    return to_string(minValue) + " " + to_string(maxValue);
}
 
int main() {
    int n;
    cin >> n;
 
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    cout << MaxMin(n, arr);
}
