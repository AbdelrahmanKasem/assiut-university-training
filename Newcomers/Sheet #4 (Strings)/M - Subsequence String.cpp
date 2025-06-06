#include <iostream>
using namespace std;
 
int main() {
    string target = "hello";
    int pointer = 0;
    
    string str;
    cin >> str;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == target[pointer]) pointer++;
    }
    
    cout << ((pointer == target.size()) ? "YES" : "NO");
}
