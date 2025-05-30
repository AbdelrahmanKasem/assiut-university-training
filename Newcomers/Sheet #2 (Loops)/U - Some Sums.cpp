#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int SumDigits (int n) {
    int sum = 0;
 
    while (n > 0) {
        sum += n % 10;
        n /= 10;
    }
 
    return sum;
}
 
int main() {
    int n, a, b;
    cin >> n >> a >> b;
 
    if (a > b) swap(a, b);
 
    long long result = 0;
 
    for (int i = 1; i <= n; i++){
        if (SumDigits(i) >= a && SumDigits(i) <= b) result += i;
    }
 
    cout << result;
}
