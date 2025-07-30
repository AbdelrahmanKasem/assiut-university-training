#include <stdio.h>
#include <iostream>
#include <math.h>
using namespace std;
 
int main()
{
    long long n;
    cin >> n;
    
    int counter = 0;
    
    while (pow(2, counter) <= n) {
        if (pow(2, counter) == n) {
            cout << "YES";
            return 0;
        }
        counter++;
    }
    
    cout << "NO";
    return 0;
}
