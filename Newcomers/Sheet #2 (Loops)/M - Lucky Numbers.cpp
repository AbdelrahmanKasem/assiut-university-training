#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
bool IsLucky (int n) {
    while (n > 0) {
        if (n % 10 != 4 && n % 10 != 7)
            return false;
        n /= 10;
    }
 
    return true;
}
 
int main() {
    int a, b;
    cin >> a >> b;
 
    bool flag = false;
 
    for (int i = a; i <= b; i++) {
        if (IsLucky(i)) {
            cout << i << ' ';
            flag = true;
        }
    }
 
    if (!flag) cout << -1;
}
