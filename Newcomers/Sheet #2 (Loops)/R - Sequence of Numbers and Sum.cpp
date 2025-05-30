#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    int a, b;
    int sum = 0;
 
    while (true) {
        cin >> a >> b;
        if (a < 1 || b < 1) return 0;
        if (a > b) swap(a, b);
 
        for (int i = a; i <= b; i++) {
            cout << i << ' ';
            sum += i;
        }
 
        cout << "sum =" << sum << endl;
        sum = 0;
    }
 
}
