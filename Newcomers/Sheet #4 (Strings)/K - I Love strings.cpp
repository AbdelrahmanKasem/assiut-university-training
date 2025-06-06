#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
 
    string a, b;
 
    int biggestLength;
    while (t--) {
        cin >> a >> b;
        biggestLength = max(a.size(), b.size());
 
        for (int i = 0; i < biggestLength; i++) {
            if (i < a.size()) cout << a[i];
            if (i < b.size()) cout << b[i];
        }
        cout << endl;
    }
}
