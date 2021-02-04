#include <iostream>

using namespace std;

int main() {
    int x, y, sum = 0;
    cin >> x >> y;
    for(int i = y; i < x; i++) {
        if(i%2 != 0)
            sum+=i;
    }
    cout << sum << endl;
    return 0;
}