#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int counter = 1;
 
    for (int row = 0; row < n; row++) {
        for (int space = 0; space < n - row - 1; space++) cout << ' ';
        for (int astric = 0; astric < counter; astric++) cout << '*';
 
        if (row != n -1) cout << endl;
        counter += 2;
    }
 
    counter = n * 2 - 1;
    int spaces = 0;
 
    cout << endl;
 
    for (int row = n - 1; row >= 0; row--) {
        for (int space = 0; space < spaces; space++) cout << ' ';
        for (int astric = 0; astric < counter; astric++) cout << '*';
 
        if (row != 0) cout << endl;
        counter -= 2;
        spaces++;
    }
}
