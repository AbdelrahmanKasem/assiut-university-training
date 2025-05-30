#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    int first = 0;
    int second = 1;
    int current = 1;
 
    int n;
    cin >> n;
 
    for (int i = 1; i <= n; i++) {
        if (i == 1) cout << 0 << ' ';
        else if (i == 2) cout << 1 << ' ';
        else if (i == 3) cout << current << ' ';
        else {
            first = second;
            second = current;
            current = first + second;
 
            cout << current << ' ';
        }
    }
}
