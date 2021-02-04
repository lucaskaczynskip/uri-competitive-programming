#include <iostream>

using namespace std;

int main() {
    int value, position = 0, aux = 0;
    for(int i = 0; i < 100; i++) {
        cin >> value;
        if(value > aux) {
            aux = value;
            position = i;
        }
    }
    cout << aux << endl;
    cout << position+1 << endl;
    return 0;
}