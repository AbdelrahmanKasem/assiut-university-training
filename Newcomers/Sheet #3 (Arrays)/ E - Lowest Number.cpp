#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    int n;
    int minimum = INT_MAX;
    int idx = -1;
    cin >> n;
 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < minimum) {
            minimum = arr[i];
            idx = i;
        }
    }
 
    cout << minimum << ' ' << idx + 1;
}
