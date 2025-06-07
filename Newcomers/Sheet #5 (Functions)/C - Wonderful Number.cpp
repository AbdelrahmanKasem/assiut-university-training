#include <iostream>
#include <math.h>
using namespace std;
 
bool IsPalindrome(string str) {
    for (int i = 0; i <= str.size() / 2; i++) {
        if (str[i] != str[str.size() - i - 1]) return false;
    }
    return true;
}
 
string Reverse(string str) {
    string result = "";
    for (int i = str.size() - 1; i >= 0; i--) result += str[i];
    return result;
}
 
string ToBinary(int n) {
    string result = "";
    
    double x = (double)n;
    
    while (x > 0) {
        x /= 2;
        if (fmod(x, 1) > 0) result += '1';
        else result += '0';
        x = int(x);
    }
    
    return Reverse(result);
}
 
int main() {
    int n;
    cin >> n;
    
    if (n % 2 != 0 && IsPalindrome(ToBinary(n))) cout << "YES";
    else cout << "NO";
}
