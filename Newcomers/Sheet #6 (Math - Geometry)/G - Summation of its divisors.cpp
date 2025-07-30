#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    long long n;
    cin >> n;
    
    long long result = 0;
    for (int i = 1; i <= sqrt(n); i++) {
        if (n % i == 0) {
            result += i;
            if (n / i != i) {
                result += n / i;
            }
        }
    }
    
    cout << result;
}
