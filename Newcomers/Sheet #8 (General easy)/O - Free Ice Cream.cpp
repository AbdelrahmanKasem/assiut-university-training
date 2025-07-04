#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    long long x;
    int n;
    cin >> n >> x;
    
    int distressedKids = 0;
    char sign;
    int packs;
    while (n--) {
      cin >> sign;
      cin >> packs;
      
      if (sign == '+') x += packs;
      else {
        if (x >= packs) x -= packs;
        else distressedKids++;
      }
    }
    
    cout << x << ' ' << distressedKids;
}
