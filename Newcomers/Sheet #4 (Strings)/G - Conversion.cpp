#include <iostream>
using namespace std;
 
int main() {
    string str;
    cin >> str;
 
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == ',') cout << ' ';
        else if (str[i] >= 'a') cout << char(str[i] - 32);
        else cout << char(str[i] + 32);
    }
}
