#include <iostream>
#include <cmath>
using namespace std;
 
int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
 
    int result = (a % 100) * (b % 100) * (c % 100) * (d % 100) % 100;
 
    if (result <= 9) {
        cout << 0;
        cout << result;
    }
    else cout << result;
}
