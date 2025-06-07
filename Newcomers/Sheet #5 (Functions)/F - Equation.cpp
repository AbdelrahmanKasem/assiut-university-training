#include <iostream>
#include <math.h>
using namespace std;
 
long long Equation(int x, int n) {
    long long result = (pow(x, 0) - 1);
    for (int i = 2; i <= n; i += 2) result += pow(x, i);
    return result;
}
 
int main() {
    int x, n;
    cin >> x >> n;
    
    cout << Equation(x, n);
}
