#include <iostream>

using namespace std;

int main() {
    int par = 0, impar = 0, pos = 0, neg = 0;
    for(int i = 0; i < 5; i++) {
        int value;
        cin >> value;
        if(value > 0)
            pos++;
        if(value < 0)
            neg++;
        if(value%2 == 0)
            par++;
        else
            impar++;
    }
    cout << par << " valor(es) par(es)\n";
    cout << impar << " valor(es) impar(es)\n";
    cout << pos << " valor(es) positivo(s)\n";
    cout << neg << " valor(es) negativo(s)\n";
    return 0;
}