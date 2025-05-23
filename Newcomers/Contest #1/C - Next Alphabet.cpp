#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    char c;
    cin >> c;
 
    cout << ((c == 122)? 'a' : ++c);
}
