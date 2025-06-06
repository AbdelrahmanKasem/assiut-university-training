#include <iostream>
using namespace std;
 
int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
 
	int score = 0;
	int n;
	cin >> n;
 
	string str;
	cin >> str;
 
	int i = 0;
 
	while (i < n) {
		if (str[i] == 'V') score += 5;
		else if (str[i] == 'W') score += 2;
		else if (str[i] == 'X') {
			if (i < n - 1) i++;
		}
		else if (str[i] == 'Y') {
			if (i < n - 1) {
				str += str[i + 1];
				i++;
				n++;
			}
		}
		else if (str[i] == 'Z') {
			if (i < n - 1) {
				if (str[i + 1] == 'V') score /= 5;
				else if (str[i + 1] == 'W') score /= 2;
 
				if (str[i + 1] == 'V' || str[i + 1] == 'W') i++;
			}
		}
		i++;
	}
	cout << score;
}
