#include <iostream>
using namespace std;
 
int main()
{
    string key = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    string original = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    string str;
    int n;
    cin >> n >> str;
    
    if (n == 1) {
        for (int i = 0; i < str.size(); i++) {
            for (int k = 0; k < original.size(); k++) {
                if (str[i] == original[k]) cout << key[k];
            } 
        }
    }
    else {
        for (int i = 0; i < str.size(); i++) {
            for (int k = 0; k < key.size(); k++) {
                if (str[i] == key[k]) cout << original[k];
            } 
        }
    }
}
