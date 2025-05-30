#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    int maxResult = 0;
 
    long long int n;
    while (t--) {
        cin >> n;
        int maxCount = 0;
 
        while (n % 2 == 0) {
            maxCount++;
            n /= 2;
        }
 
        if (maxCount > maxResult) maxResult = maxCount;
    }
    cout << maxResult;
}
