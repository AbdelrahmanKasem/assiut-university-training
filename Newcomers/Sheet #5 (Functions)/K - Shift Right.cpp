#include <iostream>
#include <algorithm>
using namespace std;
 
void ShiftRight(int arr[], int n, int x) {
    while (x--) {
        int temp = arr[n - 1];
        for (int i = n - 1; i > 0; i--) {
            arr[i] = arr[i - 1];
        }
        arr[0] = temp;
    }
    
    for (int i = 0; i < n; i++) cout << arr[i] << ' ';
}
 
int main()
{
    int n, x;
    cin >> n >> x;
    
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    ShiftRight(arr, n, x);
}
