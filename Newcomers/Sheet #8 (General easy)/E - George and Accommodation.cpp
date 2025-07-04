#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
    
    int counter = 0;
    
    int p, q;
    for (int i = 0; i < n; i++) {
        cin >> p >> q;
        
        if (p <= q - 2) counter++;
    }
    
    cout << counter;
}
