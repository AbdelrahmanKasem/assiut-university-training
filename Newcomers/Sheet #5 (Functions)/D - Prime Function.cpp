#include <iostream>
#include <math.h>
#include <limits>
#include <string>
using namespace std;
 
bool IsPrime(int n) {
    if (n == 1) return false;
    if (n == 2) return true;
    for (int i = 2; i <= sqrt(n); i++)
        if (n % i == 0) return false;
    return true;
}
 
int main() {
    int t;
    cin >> t;
 
    int n;
    while (t--) {
        cin >> n;
        cout << (IsPrime(n)? "YES" : "NO");
        cout << endl;
    }
}
