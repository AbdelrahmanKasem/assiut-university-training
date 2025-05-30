#include <iostream>
#include <math.h>
#include <limits>
using namespace std;
 
int main() {
    long long arr[51];
    arr[1] = 0;
    arr[2] = 1;
 
    int n;
    cin >> n;
 
    if (n == 1) cout << arr[1];
    else if (n == 2) cout << arr[2];
 
    for (int i = 3; i < 51; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
        if (i == n) {
            cout << arr[i];
            break;
        }
    }
}
