#include <iostream>
using namespace std;

void simple_sort(int a, int b, int c) {
    int vet[3] = {a, b, c}, aux;
    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(vet[i] < vet[j]) {
                aux = vet[j];
                vet[j] = vet[i];
                vet[i] = aux;
            }
        }
    }
    for(int i = 0; i < 3; i++)
        cout << vet[i] << endl;
    cout << endl << a << endl << b << endl << c << endl;
}

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    simple_sort(a, b, c);
}   