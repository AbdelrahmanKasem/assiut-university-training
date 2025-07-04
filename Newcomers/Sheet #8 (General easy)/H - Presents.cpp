#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    cin >> n;
    
    int idx_arr[n];
    int x;  
    for (int i = 0; i < n; i++) {
      cin >> x;
      idx_arr[x - 1] = i + 1;
    }
    
    for (int i = 0; i < n; i++) cout << idx_arr[i] << ' ';
}
