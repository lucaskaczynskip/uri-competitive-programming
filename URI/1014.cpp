#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int distance;
    double spent_fuel;

    cin >> distance >> spent_fuel;

    double spent_by = distance / spent_fuel;

    cout << fixed << setprecision(3);
    cout << spent_by << " km/l\n";

    return 0;
}
