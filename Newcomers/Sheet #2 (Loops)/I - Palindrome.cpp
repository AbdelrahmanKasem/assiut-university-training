#include<iostream>
#include <limits>
using namespace std;
 
int Reverse (int n) {
    int result = 0;
 
    while (n > 0) {
        result *= 10;
        result += n % 10;
        n /= 10;
    }
 
    return result;
}
 
int main() {
    int n; cin >> n;
 
    cout << Reverse(n) << endl;
    cout << ((Reverse(n) == n)? "YES" : "NO" );
}
