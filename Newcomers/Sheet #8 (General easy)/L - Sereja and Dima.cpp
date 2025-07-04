#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    int left = 0;
    int right = n - 1;
    int sereja = 0;
    int dima = 0;
    int counter = 0;
    while (counter < n) {
      if (arr[left] > arr[right]) {
        if (counter % 2 == 0) sereja += arr[left];
        else dima += arr[left];
        left++;
      }
      else {
        if (counter % 2 == 0) sereja += arr[right];
        else dima += arr[right];
        right--;
      }
      counter++;
    }
    
    cout << sereja << ' ' << dima;
}
