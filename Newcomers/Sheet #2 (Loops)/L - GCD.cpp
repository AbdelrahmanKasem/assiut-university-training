#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
 
    if (a > b) swap(a, b);
 
    for (int i = a; i > 0; i--) {
        if (a % i == 0 && b % i == 0) {
            cout << i;
            break;
        }
    }
}
