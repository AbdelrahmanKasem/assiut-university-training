#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    
    string str;
    while (t--) {
        cin >> str;
        bool isGood = false;
        
        for (int i = 0; i < str.size() - 2; i++) {
            if (str[i] == '0' && str[i + 1] == '1' && str[i + 2] == '0' ||
            str[i] == '1' && str[i + 1] == '0' && str[i + 2] == '1'){
                isGood = true;
                break;
            }
        }
        
        cout << (isGood ? "Good" : "Bad");
        cout << endl;
    }
}
