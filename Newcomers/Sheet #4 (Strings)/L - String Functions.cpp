#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
    int n, q; cin >> n >> q;
    string s; cin >> s;
 
    while (q--) {
        string x; cin >> x;
 
        if (x == "pop_back") {
            s.pop_back();
        }
        else if (x == "front") {
            cout << s.front() << endl;
        }
        else if (x == "back") {
            cout << s.back() << endl;
        }
        else if (x == "sort") {
            int l, r; cin >> l >> r;
            l--;
            r--;
            if (l > r) swap(l, r);
            sort(s.begin() + l, s.begin() + r + 1);
        }
        else if (x == "reverse") {
            int l, r; cin >> l >> r;
            l--;
            r--;
            if (l > r) swap(l, r);
            reverse(s.begin() + l, s.begin() + r + 1);
 
        }
        else if (x == "print") {
            int pos; cin >> pos;
            pos--;
            cout << s[pos] << endl;
        }
        else if (x == "substr") {
            int l, r; cin >> l >> r;
            l--;
            r--;
            if (l > r) swap(l, r);
            cout << s.substr(l, r - l + 1) << endl;
        }
        else {
            char k; cin >> k;
            s.push_back(k);
        }
    }
}
