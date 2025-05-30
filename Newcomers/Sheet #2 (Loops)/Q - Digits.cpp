#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    string n;
    while (t--) {
        cin >> n;
 
        for (int i = size(n) - 1; i >= 0; i--) {
            cout << n[i];
            if (i != 0) cout << ' ';
        }
        cout << endl;
    }
}
