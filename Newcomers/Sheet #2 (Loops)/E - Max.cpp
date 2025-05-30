#include <iostream>
#include <limits.h>
using namespace std;
 
int main() {
    int n; cin >> n;
    int test;
    int max = INT_MIN;
    
    while (n--) {
        cin >> test;
        if (test > max) max = test;
    }
    
    cout << max;
}
