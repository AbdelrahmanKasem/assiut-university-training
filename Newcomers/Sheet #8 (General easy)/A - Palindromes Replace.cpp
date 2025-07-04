#include <iostream>
using namespace std;
 
int main() {
    string str;
    cin >> str;
    
    for (int i = 0; i <= str.size() / 2; i++) {
        if (str[i] == '?' && str[str.size() - i - 1] == '?') {
            str[i] = 'a';
            str[str.size() - i - 1] = 'a';
        }
        else if (str[i] == '?') {
            str[i] = str[str.size() - i - 1];
        }
        else if (str[str.size() - i - 1] == '?') {
            str[str.size() - i - 1] = str[i];
        }
        
        if (str[i] != str[str.size() - i - 1]) {
            cout << -1;
            return 0;
        }
    }
    
    cout << str;
}
