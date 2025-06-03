#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    int x, y;
    while (t--) {
        cin >> x >> y;
 
        if (x == y) cout << "Square";
        else cout << "Rectangle";
        cout << endl;
    }
}
