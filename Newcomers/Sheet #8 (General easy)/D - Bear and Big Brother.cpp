#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
 
    int counter = 0;
 
    while (a <= b) {
        a *= 3;
        b *= 2;
        counter++;
    }
 
    cout << counter;
}
