#include <iostream>
#include <math.h>
#include <limits>
using namespace std;
 
int ToDigit (char ch) {
    return ch - 48;
}
 
int main() {
    int n;
    cin >> n;
    string str;
    int sum = 0;
    cin >> str;
 
    for (int i = 0; i < str.size(); i++) sum += ToDigit(str[i]);
 
    cout << sum;
}
