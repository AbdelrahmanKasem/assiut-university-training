#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    long long a, b, c;
    char s, q;
    
    cin >> a;
    cin >> s;
    cin >> b;
    cin >> q;
    cin >> c;
    
    if (s == '+') {
        if (a + b == c) cout << "Yes";
        else cout << a + b;
    }
    else if (s == '*') {
        if (a * b == c) cout << "Yes";
        else cout << a * b;
    }
    else {
        if (a - b == c) cout << "Yes";
        else cout << a - b;
    }
}
