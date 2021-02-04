#include <iostream>

using namespace std;

void multiple(int a, int b) {
    if(a%b==0)
        cout << "Sao Multiplos" << endl;
    else
        cout << "Nao sao Multiplos" << endl;
}

int main() {
    int a, b;
    cin >> a >> b;
    if(a > b)
        multiple(a, b);
    else 
        multiple(b, a);
}