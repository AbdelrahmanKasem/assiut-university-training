#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    string str;
    cin >> str;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'E') {
            if (str.substr(i, 5) == "EGYPT") {
                str.erase(i, 4);
                str[i] = ' ';
            }
        }
    }
    
    cout << str;
}
