#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;

int main() {
    const double PI = 3.141592653;
    double r; cin >> r;

    cout << fixed << setprecision(9);
    cout << PI * pow(r, 2);
}
