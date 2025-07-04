#include <iostream>
#include <cmath>
using namespace std;
 
bool isPrime(long long n) {
    if (n == 0 || n == 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
      if (n % i == 0) return false;
    }
    return true;
}
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    bool binary_arr[51] = { false };
    long long fibonacci_arr[51] = { 0 };
    fibonacci_arr[1] = 0;
    fibonacci_arr[2] = 1;
    
    for (int i = 3; i <= 50; i++) {
      fibonacci_arr[i] += fibonacci_arr[i - 1] + fibonacci_arr[i - 2];
      if (isPrime(fibonacci_arr[i])) binary_arr[i] = true;
    }
    
    int t;
    cin >> t;
    
    int n;
    while (t--) {
      cin >> n;
      if (binary_arr[n]) cout << "prime";
      else cout << "not prime";
      cout << endl;
    }
}
