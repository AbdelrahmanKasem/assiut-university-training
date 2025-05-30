#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    char s;
    int n;
 
    cin >> s >> n;
 
    int arr[n];
 
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    for (int row = 0; row < n; row++) {
        for (int col = 0; col < arr[row]; col++) {
            cout << s;
        }
        if (row != n - 1) cout << endl;
    }
}
