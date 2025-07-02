#include <iostream>
#include <limits.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    
    for (int i = 1; i <= 12; i++) {
        cout << n << " * "  << i << " = " << n * i;
        if (i != 12) cout << endl;
    }
}
