#include <iostream>
#include <stdlib.h>

using namespace std;

int main() {

    int a, b, c;
    cin >> a >> b >> c;

    int higherAB = (a + b + abs(a-b)) / 2, higher;
    higher = (higherAB + c + abs(higherAB-c)) / 2;

    cout << higher << "eh o maior\n";

    return 0;
}
