#include <iostream>
#include <math.h>
#include <limits>
#include <string>
#include <iomanip>
using namespace std;
 
double GetAverage(double arr[], int n) {
    double sum = 0;
    for (int i = 0; i < n; i++) sum += arr[i];
    return sum / n;
}
 
int main() {
    int n;
    cin >> n;
 
    double arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
 
    cout << fixed << setprecision(6) << GetAverage(arr, n);
}
