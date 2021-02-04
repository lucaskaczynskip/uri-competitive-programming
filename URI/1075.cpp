#include <iostream>

using namespace std;

void rest(int value) {
    int x = value;
    for(int i = 1; i < 10000; i++) {
        if(i%x == 2)
            cout << i << endl;
    }
}

int main() {
    int n;
    cin >> n;
    rest(n);
}