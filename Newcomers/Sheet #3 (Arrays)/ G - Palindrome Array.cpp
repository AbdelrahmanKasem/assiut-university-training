#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    int n;
    bool flag = true;
    cin >> n;
 
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i <= n / 2; i++) {
        if (arr[i] != arr[n - i - 1]) {
            flag = false;
            break;
        }
    }
 
    cout << (flag ? "YES" : "NO");
}
