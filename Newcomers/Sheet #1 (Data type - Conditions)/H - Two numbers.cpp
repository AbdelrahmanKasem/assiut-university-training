#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;

int main() {
    float a, b; cin >> a >> b;
    float result = a / b;


    cout << "floor " << a << " / " << b << " = " << int(a / b) << endl;

    if (fmod(result, 1)  > 0) cout << "ceil " << a << " / " << b << " = " << int(a / b) + 1;
    else cout << "ceil " << a << " / " << b << " = " << int(a / b);

    cout << endl;

    if (fmod(result, 1) >= .45) cout << "round " << a << " / " << b << " = " << int(a / b) + 1;
    else cout << "round " << a << " / " << b << " = " << int(a / b);
}
