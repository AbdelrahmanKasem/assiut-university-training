#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    int t; cin >> t;
    double n;
 
    while (t--){
        string bin = "";
        int result = 0;
        cin >> n;
 
        while (n > 0) {
            n /= 2;
            if (fmod(n, 1) > 0) bin += '1';
            n = int(n);
        }
 
        for (int i = 0; i < size(bin); i++) result += pow(2, i);
 
        cout << result;
        if (t != 0) cout << endl;
    }
}
