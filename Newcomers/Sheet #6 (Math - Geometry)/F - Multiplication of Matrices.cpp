#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int aRow, aCol;
    cin >> aRow >> aCol;
    
    int a[aRow][aCol];
    for (int row = 0; row < aRow; row++) {
        for (int col = 0; col < aCol; col++) {
            cin >> a[row][col];
        }
    }
    
    int bRow, bCol;
    cin >> bRow >> bCol;
    
    int b[bRow][bCol];
    for (int row = 0; row < bRow; row++) {
        for (int col = 0; col < bCol; col++) {
            cin >> b[row][col];
        }
    }
    
    for (int main = 0; main < aRow; main++) {
        for (int outer = 0; outer < bCol; outer++) {
            long long res = 0;
            for (int inner = 0; inner < aCol; inner++) {
                res += a[main][inner] * b[inner][outer];
            }
            cout << res << ' ';
        }
        cout << endl;
    }
}
