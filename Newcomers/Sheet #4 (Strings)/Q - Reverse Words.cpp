#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    string str;
    getline(cin, str);
    
    int stopPoint = 0;
    
    for (int i = 0; i <= str.size(); i++) {
        if (str[i] == ' ' || i == str.size() ) {
            for (int k = i - 1; k >= stopPoint; k--) {
                cout << str[k];
            }
            if (i != str.size()) cout << ' ';
            stopPoint = i + 1;
        }
    }
}
