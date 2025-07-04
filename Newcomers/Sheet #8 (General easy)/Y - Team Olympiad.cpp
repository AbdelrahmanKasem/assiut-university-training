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
    
    int prog[n];
    int math[n];
    int phys[n];
    
    int prog_pointer = 0;
    int math_pointer = 0;
    int phys_pointer = 0;
    
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] == 1) prog[prog_pointer++] = i;
      else if (arr[i] == 2) math[math_pointer++] = i;
      else phys[phys_pointer++] = i;
    }
    
    int teams = min(prog_pointer, min(math_pointer, phys_pointer));
    
    cout << teams << endl;
    
    for (int i = 0; i < teams; i++) {
      cout << ++prog[i] << ' ' << ++math[i] << ' ' << ++phys[i] << endl;
    }
}
