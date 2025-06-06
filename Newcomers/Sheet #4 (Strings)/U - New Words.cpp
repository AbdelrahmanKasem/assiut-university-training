#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    string str;
    cin >> str;
    
    int e = 0;
    int g = 0;
    int y = 0;
    int p = 0;
    int t = 0;
    
    for (int i = 0; i < str.size(); i++) {
        if (str[i] <= 'Z') str[i] += 32;
        
        if (str[i] == 'e') e++;
        else if (str[i] == 'g') g++;
        else if (str[i] == 'y') y++;
        else if (str[i] == 'p') p++;
        else if (str[i] == 't') t++;
    }
    
    cout << min(min(e, g), min(y, min(p, t)));
}
