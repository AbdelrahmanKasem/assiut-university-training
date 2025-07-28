#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, m, q;
    cin >> n >> m >> q;
    
    char arr[n][m];
    for (int row = 0; row < n; row++) {
      for (int col = 0; col < m; col++) {
        arr[row][col] = '.';
      }
    }
    
    int row_start, col_start, row_end, col_end;
    char c;
    
    while (q--) {
      cin >> row_start >> col_start >> row_end >> col_end >> c;
      row_start--;
      col_start--;
      row_end--;
      col_end--;
      if (row_start > row_end) swap(row_start, row_end);
      if (col_start > col_end) swap(col_start, col_end);
      for (int row = row_start; row <= row_end; row++) {
        for (int col = col_start; col <= col_end; col++) {
          arr[row][col] = c;
        }
      }
    }
    
    for (int row = 0; row < n; row++) {
      for (int col = 0; col < m; col++) {
        cout << arr[row][col];
      }
      cout << endl;
    }
}
