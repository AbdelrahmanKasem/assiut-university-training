#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
 
    int power = 0;
    int result = 0;
    int maxOne = max(a, b);
 
    while (maxOne > 0) {
        if (a % 2 != 0 ^ b % 2 != 0) result += pow(2, power);
 
        maxOne /= 2;
        a /= 2;
        b /= 2;
        power++;
    }
    cout << result;
}
