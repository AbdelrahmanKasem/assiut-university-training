#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
bool IsPrime (int n) {
    if (n == 1) return false;
    if (n == 2) return true;
 
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
 
int main() {
    int n; cin >> n;
 
    for (int i = 1; i <= n; i++) {
        if (IsPrime(i)) {
            cout << i;
            if (i != n) cout << ' ';
        }
    }
}
