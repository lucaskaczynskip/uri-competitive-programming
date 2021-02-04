#include <iostream>
 
using namespace std;

void six_oddNumbers(int value) {
    int number = value, odd = 0;
    while(odd < 6) {
        if(number%2 != 0) {
            cout << number << endl;
            odd++;
        }
        number++;
    }
}

int main() {
    int value;
    cin >> value;
    six_oddNumbers(value);
    return 0;
}