#include <iostream>
#include <algorithm>
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	string str;
	cin >> str;
 
	string left = "";
	string right = "";
	string result;
 
	for (int i = 1; i < str.size(); i++) {
		left = str.substr(0, i);
		right = str.substr(i, str.size() - i);
 
		sort(left.begin(), left.end());
		sort(right.begin(), right.end());
 
		if (i == 1) result = left + right;
		else {
			if (left + right < result) result = left + right;
		}
	}
	if (str.size() == 1) cout << str;
	cout << result;
}
