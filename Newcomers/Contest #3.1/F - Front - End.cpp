#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
 
    int pointer = 0;
    int counter = 0;
 
    while (counter < n) {
        if (counter % 2 == 0) {
            cout << arr[pointer] << ' ';
            pointer++;
        }
        else cout << arr[n - pointer] << ' ';
        counter++;
    }
}
