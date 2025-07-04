#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    int policeMen = 0;
    int n;
    cin >> n;
    
    int untreatedCrimes = 0;
    int event;
    while (n--) {
      cin >> event;
      if (event > 0) policeMen += event;
      else {
        if (policeMen > 0) policeMen--;
        else untreatedCrimes++;
      }
    }
    cout << untreatedCrimes;
}
