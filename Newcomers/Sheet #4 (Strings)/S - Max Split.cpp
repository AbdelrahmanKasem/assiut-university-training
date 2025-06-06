#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    string str;
    cin >> str;
    
    int result = 0;
    int lCounter = 0;
    int rCounter = 0;
    
    string arr[500];
    int pointer = 0;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == 'L') lCounter++;
        else rCounter++;
        if (lCounter > 0 && lCounter == rCounter) {
            result++;
            arr[pointer] = str.substr(0, i + 1);
            str.erase(0, i + 1);
            i = -1;
            pointer++;
        }
    }
    
    cout << result << endl;
    for (int i = 0; i < pointer; i++) cout << arr[i] << endl;
}
