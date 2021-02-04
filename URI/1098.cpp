#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double i = 0, j = 1;
    while(i <= 2) {
        for(int _ = 0; _ < 3; _++)
            cout << "I=" << i << " J=" << j+_+i << endl;
        i += 0.2;
    }
    return 0;
}