#include<iostream>
#include <limits>
#include <math.h>
using namespace std;
 
int main() {
    int n;
    long long sum = 0;
    cin >> n;
 
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
        sum += arr[i];
    }
 
    cout << abs(sum);
}
