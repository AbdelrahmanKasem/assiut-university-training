#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int n, maxValue = 0;
    cin >> n;
 
    int arr[n];
    int freq[1001] = { 0 };
 
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]]++;
        if (arr[i] > maxValue) maxValue = arr[i];
    }
 
    int result = 0;
    for (int i = 0; i < maxValue; i++) {
        if (freq[i] > 0 && freq[i + 1] > 0) result += freq[i];
    }
    cout << result;
}
