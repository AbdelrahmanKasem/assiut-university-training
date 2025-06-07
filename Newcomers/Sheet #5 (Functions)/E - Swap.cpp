#include <iostream>
using namespace std;
 
void Swap(int &a, int &b) {
    a += b;
    b = a - b;
    a -= b;
}
 
int main() {
    int a, b;
    cin >> a >> b;
 
    Swap(a, b);
 
    cout << a << ' ' << b;
}
