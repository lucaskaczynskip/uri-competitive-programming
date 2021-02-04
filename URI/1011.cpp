#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    double radius, volume, PI = 3.14159;
    cin >> radius;

    volume = (4 / 3.0) * PI * (radius * radius* radius);

    cout << "VOLUME = " << fixed << setprecision(3) << volume << "\n";

    return 0;
}
