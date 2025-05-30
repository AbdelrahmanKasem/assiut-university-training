#include <iostream>
#include <math.h>
#include <limits>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int counter = 0;
 
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    bool flag = true;
    while (true) {
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 0) arr[i] /= 2;
            else {
                flag = false;
                break;
            }
            if (i == n - 1) counter++;
        }
        if (!flag) break;
    }
 
    cout << counter;
}
