#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    char ch; cin >> ch;

    if (ch < 96) {
	    if (ch < 65) cout << "IS DIGIT";
	    else cout << "ALPHA\nIS CAPITAL";
    }
    else cout << "ALPHA\nIS SMALL";
}
