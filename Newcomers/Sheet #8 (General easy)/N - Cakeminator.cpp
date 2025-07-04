#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    bool valid_rows[10];
    bool valid_cols[10];
    fill(valid_rows, valid_rows + 10, true);
    fill(valid_cols, valid_cols + 10, true);
   
    int rows, cols;
    cin >> rows >> cols;
    
    char arr[rows][cols];
    for (int row = 0; row < rows; row++) {
      for (int col = 0; col < cols; col++) {
        cin >> arr[row][col];
        if (arr[row][col] == 'S') {
          valid_rows[row] = false;
          valid_cols[col] = false;
        }
      }
    }
    
    int result = 0;
    for (int row = 0; row < rows; row++) {
      for (int col = 0; col < cols; col++) {
        if ((valid_rows[row] || valid_cols[col]) && arr[row][col] == '.') {
          result++;
          arr[row][col] = ' ';
        }
      }
    }
    
    cout << result;
}
