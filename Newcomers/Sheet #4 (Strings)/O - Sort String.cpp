#include <iostream>
using namespace std;
 
int main() {
    int size;
    cin >> size;
    
    char x;
    int freq[26] = { 0 };
    for (int i = 0; i < size; i++) {
        cin >> x;
        freq[x - 97]++;
    }
    
    for (int i = 0; i < 26; i++) {
        for (int k = 0; k < freq[i]; k++) {
            cout << char(i + 97);
        }
    }
}
