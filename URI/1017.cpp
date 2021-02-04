#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int t, v;
    cin >> t >> v;

    double distance = t * v, l;
    l = distance / 12;

    cout << fixed << setprecision(3) << l << "\n";

    return 0;
}
