#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float n; cin >> n;
    
    if (fmod(n, 1) > 0) {
        cout << "float " << int(n) << " " << fmod(n, 1); 
    }
    else cout << "int " << int(n);
}
