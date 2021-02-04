#include <iostream>

using namespace std;

int main() {
    int password = 0;
    do {
        cin >> password;
        if(password != 2002)
            cout << "Senha Invalida" << endl;
    } while(password != 2002);
    cout << "Acesso Permitido" << endl;
    return 0;
}