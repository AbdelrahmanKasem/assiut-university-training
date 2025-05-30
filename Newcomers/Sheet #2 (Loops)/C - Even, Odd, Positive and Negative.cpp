#include<iostream>
#include <limits>
using namespace std;
 
int main() {
    int positive = 0;
    int negative = 0;
    int even = 0;
    int odd = 0;
    int n;
    int temp;
 
    cin >> n;
 
    while (n--) {
        cin >> temp;
 
        if (temp > 0) positive++;
        if (temp < 0) negative++;
        if (temp % 2 == 0) even++;
        else odd++;
    }
 
    cout << "Even: " << even << endl;
    cout << "Odd: " << odd << endl;
    cout << "Positive: " << positive << endl;
    cout << "Negative: " << negative;
}
