#include <iostream>
using namespace std;
 
int main() {
    string str;
    cin >> str;
 
    int arr[123] = { 0 };
 
    for (int i = 0; i < str.size(); i++) arr[str[i]]++;
    for (int i = 0; i < 123; i++) {
        if (arr[i] > 0) cout << char(i) << " : " << arr[i] << endl;
    }
}
