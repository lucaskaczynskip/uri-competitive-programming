#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int value, n;
    cin >> value;
    cout << value << endl;
    cout << value/100 << " notas(s) de R$ 100,00" << endl;
    n=(value%100);
    cout << n/50 << " notas(s) de R$ 50,00" << endl;
    n=(n%50);
    cout << n/20 << " notas(s) de R$ 20,00" << endl;
    n=(n%20);
    cout << n/10 << " notas(s) de R$ 10,00" << endl;
    n=(n%10);
    cout << n/5 << " notas(s) de R$ 5,00" << endl;
    n=(n%5);
    cout << n/2 << " notas(s) de R$ 2,00" << endl;
    n=(n%2);
    cout << n/1 << " notas(s) de R$ 1,00" << endl;
}
