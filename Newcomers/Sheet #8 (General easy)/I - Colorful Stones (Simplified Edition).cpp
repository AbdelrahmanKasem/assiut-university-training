#include <iostream>
using namespace std;
 
int main() {
  ios::sync_with_stdio(0);
  cin.tie(0);
 
  string s, t;
  cin >> s >> t;
  
  int pointer = 0;
  for (int i = 0; i < t.size(); i++) {
    if (s[pointer] == t[i]) pointer++;
  }
  cout << ++pointer;
}
