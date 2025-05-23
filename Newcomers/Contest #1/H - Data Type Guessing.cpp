#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    double a, b, c, result;
    cin >> a >> b >> c;
 
    result = a * b / c;
 
    if (fmod(result, 1) > 0) cout << "double";
    else if (result > INT_MAX) cout << "long long";
    else cout << "int";
}
