#include <iostream>
#include <algorithm>
#include <limits.h>
#include <cmath>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n;
    string str;   
    cin >> n >> str;
    
    char arr[n];
    
    int pos = (n % 2 == 0)? n / 2 - 1 : n / 2;
    
    int count = 0;
    for (int i = 0; i < n; i++) {
      if (i == 0) arr[pos] = str[i];
      else if (n % 2 == 1 && i % 2 == 1) arr[pos - count] = str[i];
      else if (n % 2 == 1 && i % 2 == 0) arr[pos + count] = str[i];
      else if (n % 2 == 0 && i % 2 == 1) arr[pos + count] = str[i];
      else arr[pos - count] = str[i];
      if (i % 2 == 0) count++;
    }
    
    for (int i = 0; i < n; i++) cout << arr[i];
}
