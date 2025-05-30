#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int counter = 1;
 
    for (int i = 1; i <= n * 4; i++) {
        if (i % 4 == 0) {
            cout << "PUM" << endl;
            counter++;
            continue;
        }
        cout << counter++ << ' ';
    }
}
