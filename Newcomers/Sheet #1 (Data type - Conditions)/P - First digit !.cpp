#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
    int n; cin >> n;

    if ((n / 1000) % 2 == 0) cout << "EVEN";
    else cout << "ODD";
}
