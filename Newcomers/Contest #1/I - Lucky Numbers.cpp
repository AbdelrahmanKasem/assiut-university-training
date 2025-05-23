#include <iostream>
using namespace std;
 
int main()
{
    int n;
    cin >> n;
    
    int ones = n % 10;
    int tens = n / 10;
    
    cout << ((ones % tens == 0 || tens % ones == 0)? "YES" : "NO");
}
