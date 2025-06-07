#include <iostream>
#include <algorithm>
using namespace std;
 
void ShiftZero(int arr[], int n) {
    int counter = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) cout << arr[i] << ' ';
        else counter++;
    }
    
    for (int i = 0; i < counter; i++) cout << 0 << ' ';
}
 
int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    ShiftZero(arr, n);
}
