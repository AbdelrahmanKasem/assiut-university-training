#include <iostream>
using namespace std;
 
int main() {
    string url;
    cin >> url;
    
    bool flag = false;
    
    for (int i = 0; i < url.size(); i++) {
        if (url[i] == '?') {
            flag = true;
            continue;
        }
        
        if (flag) {
            if (url[i] == '=') cout << ": ";
            else if (url[i] == '&') cout << endl;
            else cout << url[i];
        }
    }
}
