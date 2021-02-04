#include <iostream>

using namespace std;

int main() {
    while(true) {
        int x, y;
        cin >> x >> y;
        if(x == y) 
            break;
        (x < y) ? cout << "Crescente" << endl : cout << "Decrescente" << endl;
    }
    return 0;
}