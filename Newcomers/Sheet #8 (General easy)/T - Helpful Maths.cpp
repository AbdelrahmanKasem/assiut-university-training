#include <iostream>
using namespace std;
 
int main()
{
    string str;
    cin >> str;
    
    int sign = 0;
    int one = 0;
    int two = 0;
    int three = 0;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '+') sign++;
        else if (str[i] == '1') one++;
        else if (str[i] == '2') two++;
        else three++;
    }
    
    for (int i = 0; i < str.size(); i++) {
        if (one > 0) {
            cout << 1;
            one--;
        }
        else if (two > 0) {
            cout << 2;
            two--;
        }
        else if (three > 0) {
            cout << 3;
            three--;
        }
        
        if (sign > 0) {
            cout << '+';
            sign--;
        }
    }
}
