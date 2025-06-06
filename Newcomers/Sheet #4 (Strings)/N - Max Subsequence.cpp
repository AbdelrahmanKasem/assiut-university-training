#include <iostream>
using namespace std;
 
int main() {
    int counter = 1;
    int n;
    cin >> n;
    
    char arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (i > 0) {
            if (arr[i] != arr[i - 1]) counter++;
        }
    }
    
    cout << counter;
}
