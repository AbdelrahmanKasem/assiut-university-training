#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
 
int main() {
    int n; cin >> n;

    int day = 0;
    int month = 0;
    int year = 0;

    year = n / 365;
    n %= 365;

    month = n / 30;
    n %= 30;

    day = n;

    cout << year << " years" << endl;
    cout << month << " months" << endl;
    cout << day << " days";
}
