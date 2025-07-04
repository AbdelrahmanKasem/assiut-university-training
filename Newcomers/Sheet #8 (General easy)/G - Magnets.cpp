#include <iostream>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int size;
    cin >> size;
    
    string str = "";
    string temp;
    for (int i = 0; i < size; i++) {
        cin >> temp;
        str += temp;
    }
    
    int counter = 1;
    for (int i = 0; i < size * 2 ; i += 2) {
        if (str[i] == str[i - 1]) counter++;
    }
    
    cout << counter;
}
