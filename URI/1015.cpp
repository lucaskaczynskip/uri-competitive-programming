#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

    double x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    double p1 = (x2 - x1) * (x2 - x1), p2, p3, distance;
    p2 = (y2 - y1) * (y2 - y1);
    p3 = p1 + p2;
    distance = sqrt(p3);

    cout << fixed << setprecision(4) << distance << "\n";

    return 0;
}
