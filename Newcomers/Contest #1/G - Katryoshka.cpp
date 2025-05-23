#include <iostream>
#include <math.h>
using namespace std;
 
int main() {
    long long eyes, mouths, bodies;
    cin >> eyes >> mouths >> bodies;
    long long result = 0;
    long long minComponent = min(min(bodies, eyes), mouths);
    bodies -= minComponent;
    eyes -= minComponent;
    mouths -= minComponent;
    eyes /= 2;
    result += minComponent;
    if (bodies >= eyes) result += eyes;
    else result += bodies;
 
    cout << result;
}
