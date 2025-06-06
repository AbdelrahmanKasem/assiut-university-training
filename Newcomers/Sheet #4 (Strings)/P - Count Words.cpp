#include <iostream>
using namespace std;
 
int main() {
    string s; getline(cin, s);
    int counter = 1;
 
    for (int i = 1; i < s.size() - 1; i++) {
        if (s[i] == ' ' || s[i] == '?' || s[i] == ',' || s[i] == '.' || s[i] == '!') {
            if (s[i+1] >= 'A' && s[i+1] <= 'Z' || s[i+1] >= 'a' && s[i+1] <= 'z')
            counter++;
        }
    }
 
    cout << counter;
}
