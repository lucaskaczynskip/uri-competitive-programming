#include <iostream>

using namespace std;

void odd_numbers(int value) {
    for(int i = 1; i <= value; i++) {
        if(i%2 != 0)
            cout << i << endl;
    }
}

int main() {
    int value;
    cin >> value;
    odd_numbers(value);
    return 0;
}