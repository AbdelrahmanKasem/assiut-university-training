#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
   
    int pointer = 1;
    string str;
    cin >> str;
   
    int arr[100];
    int steps = 0;
    for (int i = 0; i < str.size(); i++) {
      arr[i] = str[i] - 96;
      steps += min(abs(pointer - arr[i]), 26 - abs(pointer - arr[i]));
      pointer = arr[i];
    }
    cout << steps;
}
