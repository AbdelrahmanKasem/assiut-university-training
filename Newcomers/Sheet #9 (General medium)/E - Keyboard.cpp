#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char c;
    string str;
    cin >> c >> str;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'q' && c == 'R') cout << 'q';
        else if (str[i] == '/' && c == 'L') cout << '/';
        else {
          for (int j = 0; j < keyboard.size(); j++) {
            if (str[i] == keyboard[j]) {
              if (c == 'R') cout << keyboard[j - 1];
              else cout << keyboard[j + 1];
              break;
          }
        }
      }
    }
}
