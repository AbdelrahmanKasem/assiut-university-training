#include <iostream>
#include <math.h>
#include <limits>
using namespace std;
 
int main() {
    int n, minInt = INT_MAX;
    cin >> n;
 
    int counter = 0;
 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < minInt) minInt = arr[i];
    }
 
    for (int i = 0; i < n; i++) {
        if (arr[i] == minInt) counter++;
    }
    cout << ((counter % 2 == 0)? "Unlucky" : "Lucky");
}
