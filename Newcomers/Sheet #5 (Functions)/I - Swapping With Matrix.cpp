#include <iostream>
using namespace std;

void matrix_swap(int arr[][500], int n, int x, int y) {
    x--;
    y--;
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
          if (row == x) swap(arr[x][col], arr[y][col]);
        }
    }
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
          if (col == x) swap(arr[row][x], arr[row][y]);
        }
    }
    return;
}

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, x, y;
    cin >> n >> x >> y;
    
    int arr[500][500];
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cin >> arr[row][col];
        }
    }
    
    matrix_swap(arr, n, x, y);
    
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < n; col++) {
            cout << arr[row][col] << ' ';
        }
        cout << endl;
    }
}
