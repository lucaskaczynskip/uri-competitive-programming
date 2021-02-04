#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int partID, partNum;

    float partValue_1;
    cin >> partID >> partNum >> partValue_1;
    partValue_1 *= partNum;

    float partValue_2;
    cin >> partID >> partNum >> partValue_2;
    partValue_2 *= partNum;

    float total_value = partValue_1 + partValue_2;

    cout << "VALOR A PAGAR: R$ " << fixed << setprecision(2) << total_value << "\n";
    /*
        a tabulação "\n" é mais rápida do que o comando endl
    */

    return 0;
}
