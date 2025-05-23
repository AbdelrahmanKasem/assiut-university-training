#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    // Biggest Number
    if (a <= b && a <= c) cout << a << endl;
    else if (b <= a && b <= c) cout << b << endl;
    else cout << c << endl;

    // Middle Number
    if (a <= b && a >= c || a >= b && a <= c) cout << a << endl;
    else if (b <= a && b >= c || b >= a && b <= c) cout << b << endl;
    else cout << c << endl;

    // Smallest Number
    if (a >= b && a >= c) cout << a << endl;
    else if (b >= a && b >= c) cout << b << endl;
    else cout << c << endl;

    cout << endl;

    cout << a << endl;
    cout << b << endl;
    cout << c;

    return 0;
}
