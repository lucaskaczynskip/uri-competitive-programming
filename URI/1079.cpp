#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        double num1, num2, num3;
        cin >> num1 >> num2 >> num3;
        cout << fixed << setprecision(1) << (num1*0.2)+(num2*0.3)+(num3*0.5) << endl;
    }
    return 0;
}