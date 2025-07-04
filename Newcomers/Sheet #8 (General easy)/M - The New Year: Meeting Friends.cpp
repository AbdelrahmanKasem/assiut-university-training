#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    int a, b, c;
    cin >> a >> b >> c;
    
    int midNum;
    
    if (a >= b && a <= c || a >= c && a <= b) midNum = a;
    else if (b >= a && b <= c || b >= c && b <= a) midNum = b;
    else midNum = c;
    
    cout << abs(midNum - max(a, max(b, c))) + abs(midNum - min(a, min(b, c)));
}
