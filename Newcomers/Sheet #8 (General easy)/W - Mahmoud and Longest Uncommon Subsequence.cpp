#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string a, b;
    cin >> a >> b;
    
    if (a == b) cout << -1;
    else cout << max(a.size(), b.size());
}
