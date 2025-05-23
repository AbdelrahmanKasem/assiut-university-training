#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    char ch; cin >> ch;

    if (ch < 96) cout << char(ch + 32);
    else cout << char(ch - 32);
}
