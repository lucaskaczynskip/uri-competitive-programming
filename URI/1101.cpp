#include <iostream>

using namespace std;

int main() {
    int m, n;
    while(true) {
        int sum = 0;
        cin >> m >> n;
        if(m <= 0 || n <= 0) 
            break;
        if(m < n) {
            for(int i = m; i <= n; i++) {
                cout << i << " ";
                sum += i;
            }
            cout << "Sum=" << sum << endl;
        } else {
            for(int i = n; i <= m; i++){
                cout << i << " ";
                sum += i;
            }
            cout << "Sum=" << sum << endl;
        }
    }
    return 0;
}