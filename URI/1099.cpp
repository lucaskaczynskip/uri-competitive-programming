#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    while(n--) {
        int x = 0, y = 0, aux = 0;
        cin >> x >> y;
        if(x > y) {
            for(int i = y+1; i < x; i++) {
                if(i%2 != 0)
                    aux += i;
            }
        } else {
            for(int i = x+1; i < y; i++) {
                if(i%2 != 0)
                    aux += i;
            }
        }
        cout << aux << endl;
    }
    return 0;
}