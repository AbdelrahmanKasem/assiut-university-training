#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n, b, d;
    cin >> n >> b >> d;
    
    int mixer = 0;
    int result = 0;
    int x;
    while (n--) {
      cin >> x;
      
      if (x <= b) {
        mixer += x;
        if (mixer > d) {
          result++;
          mixer = 0;
        }
      }
    }
    
    cout << result;
}
