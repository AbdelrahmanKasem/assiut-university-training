#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
void Print(int n, int a[], int b[]) {
    for (int i = 0; i < n; i++) cout << b[i] << ' ';
    for (int i = 0; i < n; i++) cout << a[i] << ' ';
}
 
int main() {
    int n;
    cin >> n;
 
    int a[n];
    int b[n];
 
    for (int i = 0; i < n; i++) cin >> a[i];
    for (int i = 0; i < n; i++) cin >> b[i];
 
    Print(n, a, b);
}
