#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
int main() {
    int n, m;
    cin >> n >> m;
 
    int freq[m + 1] = { 0 };
 
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x <= m) freq[x]++;
    }
 
    for (int i = 1; i <= m; i++) cout << freq[i] << endl;
}
