#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
    
    long long row = n / 4;
    long long col;
    
    if (row % 2 == 0) col = n % 4;
    else col = abs(3 - (n % 4));
    
    cout << row << ' ' << col;
}
