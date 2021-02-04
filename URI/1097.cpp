#include <iostream>

using namespace std;

int main() {
    int i = 1, j = 7;
    while(i < 10) {
        for(int _ = 0; _ < 3; _++) {
            cout << "I=" << i << " J=" << j << endl;
            j -= 1;
        }
        j += 5;
        i += 2;
    }
    return 0;
}