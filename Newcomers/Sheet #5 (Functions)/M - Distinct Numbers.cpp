#include <iostream>
#include <limits.h>
using namespace std;

int distinct_numbers(int arr[], int size, int maxVal) {
        int freq[1000000] = { 0 };
	for (int i = 0; i < size; i++) freq[arr[i] + 500000]++;

	int counter = 0;
	for (int i = 0; i <= maxVal + 500000; i++) if (freq[i] > 0) counter++;
	return counter;
}

int main() {
	int n;
	cin >> n;

	int maxVal = INT_MIN;
	int arr[n];
	for (int i = 0; i < n; i++) {
		cin >> arr[i];
		if (arr[i] > maxVal) maxVal = arr[i];
	}

	cout << distinct_numbers(arr, n, maxVal);
}
