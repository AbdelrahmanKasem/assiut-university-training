#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    long long int a, b, c, d;
    cin >> a >> b >> c >> d;
 
    if (a + b - c == d ||
        a + b * c == d ||
        a - b + c == d ||
        a - b * c == d ||
        a * b - c == d ||
        a * b + c == d) cout << "YES";
    else cout << "NO";
}
