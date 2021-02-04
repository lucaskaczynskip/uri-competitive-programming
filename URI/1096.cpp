#include <iostream>

using namespace std;

int main() {
    int i = 1;
    while(i < 10) {
        int j = 7;
        for(int _ = 0; _ < 3; _++) {
            cout << "I=" << i << " J=" << j << endl;
            j -= 1;
        }
        i += 2;
    }
    return 0;
}