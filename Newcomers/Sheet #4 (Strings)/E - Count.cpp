#include <iostream>
using namespace std;
 
int main() {
    string str;
    cin >> str;
 
    int sum = 0;
 
    for (int i = 0; i < str.size(); i++) sum += str[i] - 48;
 
    cout << sum;
}
