#include <iostream>
#include <limits.h>
#include <cmath>
using namespace std;
 
int GetMax(int arr[], int n) {
    int maxValue = INT_MIN;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] > maxValue) maxValue = arr[i];
    }
    return maxValue;
}
 
int GetMin(int arr[], int n) {
    int minValue = INT_MAX;
    
    for (int i = 0; i < n; i++) {
        if (arr[i] < minValue) minValue = arr[i];
    }
    return minValue;
}
 
bool IsPrime(int n) {
    if (n == 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}
 
bool IsPalindrome(int n) {
    int temp = n;
    int reversed = 0;
    
    while (temp > 0) {
        reversed *= 10;
        reversed += temp % 10;
        temp /= 10;
    }
    
    if (n == reversed) return true;
    return false;
}
 
int CountPrime(int arr[], int n) {
    int counter = 0;
    
    for (int i = 0; i < n; i++) {
        if (IsPrime(arr[i])) counter++; 
    }
    return counter;
}
 
int CountPalindrome(int arr[], int n) {
    int counter = 0;
    
    for (int i = 0; i < n; i++) {
        if (IsPalindrome(arr[i])) counter++; 
    }
    return counter;
}
 
int NumberOfDivisors(int n) {
    int counter = 0;
    
    for (int i = 1; i <= n; i++) if (n % i == 0) counter++;
    return counter;
}
 
int MaxDivisor(int arr[], int n) {
    int counter = 0;
    int result = 0;
    
    for (int i = 0; i < n; i++) {
        if (NumberOfDivisors(arr[i]) > counter) {
            counter = NumberOfDivisors(arr[i]);
            result = arr[i];
        }
        else if (NumberOfDivisors(arr[i]) == counter && arr[i] > result) {
            result = arr[i];
        }
    }
    return result;
}
 
int main()
{
    int n;
    cin >> n;
    
    int arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    
    cout << "The maximum number : " << GetMax(arr, n) << endl;
    cout << "The minimum number : " << GetMin(arr, n) << endl;
    cout << "The number of prime numbers : " << CountPrime(arr, n) << endl;
    cout << "The number of palindrome numbers : " << CountPalindrome(arr, n) << endl;
    cout << "The number that has the maximum number of divisors : " << MaxDivisor(arr, n);
}
