#include <iostream>

using namespace std;

void square_pairs(int value) {
    int number = value, i = 1;
    while(i <= number) {
        if(i%2 == 0) {
            cout << i << "^2 = " << i*i << endl;
        }
        i++;
    }
}

int main() {
    int n;
    cin >> n;
    square_pairs(n);
}