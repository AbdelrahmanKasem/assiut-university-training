#include <iostream>
#include <math.h>
#include <limits>
#include <string>
using namespace std;
 
void Print(int n, char c) {
    for (int i = 0; i < n; i++) cout << c << ' ';
}
 
int main() {
    int t;
    cin >> t;
 
    while (t--) {
        int n;
        char c;
        cin >> n >> c;
 
        Print(n, c);
        cout << endl;
    }
}
