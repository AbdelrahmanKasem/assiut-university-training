#include <iostream>
#include <math.h>
#include <iomanip>
using namespace std;
 
int main()
{
    int a, b;
    cin >> a;
    char c; 
    cin >> c;
    cin >> b;
    
    if (c == '<') {
        if (a < b) cout << "Right";
        else cout << "Wrong";
    }
    else if (c == '>') {
        if (a > b) cout << "Right";
        else cout << "Wrong";
    }
    else {
        if (a == b) cout << "Right";
        else cout << "Wrong";
    }
}
