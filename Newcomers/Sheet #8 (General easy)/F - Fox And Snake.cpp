#include <iostream>
using namespace std;
 
int main() {
    int x, y;
    cin >> x >> y;
    
    for (int row = 0; row < x; row++) {
        for (int col = 0; col < y; col++) {
            if (row % 2 == 0) cout << '#';
            else if ((row - 1) % 4 == 0 && col == y - 1) cout << '#';
            else if (col == 0 && (row - 1) % 4 != 0) cout << '#';
            else cout << '.';
        }
        cout << endl;
    }
}
