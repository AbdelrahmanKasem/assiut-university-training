#include <iostream>
#include <algorithm>
#include <limits.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);
    
    int n; 
    cin >> n;
   
    int before[1000];
    int after[1000];
   
    bool rated = false;
    bool unrated = false;
   
    for (int i = 0; i < n; i++) {
	    cin >> before[i];
	    cin >> after[i];
    }
   
    for (int i = 0; i < n; i++) {
      if (before[i] != after[i]) {
        rated = true;
        break;
      }
      if (i > 0) {
        if (before[i] > before[i - 1] && after[i] > after[i - 1]) {
	        unrated = true;
        }
      }
    }
   
    if (rated) cout << "rated";
    else if (unrated) cout << "unrated";
    else cout << "maybe";
}
