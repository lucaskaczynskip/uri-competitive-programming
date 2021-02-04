#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double value, add = 0;
    int pos = 0;
    for(int i = 0; i < 6; i++) {
        cin >> value;
        if(value > 0) {
            pos++;
            add += value;
        }
    }
    double media = add/pos;
    cout << pos << " valores positivos\n";
    cout << fixed << setprecision(1) << media << endl;
    return 0;
}