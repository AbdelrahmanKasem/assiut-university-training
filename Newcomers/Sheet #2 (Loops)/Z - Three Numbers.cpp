#include <iostream>
#include <cmath>
using namespace std;
 
int main() {
        ios::sync_with_stdio(0);
        cin.tie(0);
 
        int counter = 0;
        int k, s;
        cin >> k >> s;
 
        for (int i = 0; i <= k; i++) {
                for (int j = 0; j <= k; j++) {
                        int z = s - (i + j);
                        if (z <= k && z >= 0 && i + j + z == s) {
                                counter++;
                        }
                }
        }
 
        cout << counter;
}
