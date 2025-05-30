#include <iostream>
#include <math.h>
#include <limits>
using namespace std;
 
int main() {
    int a, b;
    cin >> a >> b;
 
    string str;
    cin >> str;
 
    bool flag = true;
 
    for (int i = 0; i < str.size(); i++) {
        if (i != a) {
            if (!(str[i] >= '0' && str[i] <= '9')) {
                flag = false;
            }
        }
    }
 
    if (str[a] != '-') flag = false;
 
    cout << (flag? "Yes" : "No");
}
