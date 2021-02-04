#include <iostream>

using namespace std;

void even_or_odd(int amount) {
    int max = amount, number;
    for(int i = 0; i < max; i++) {
        cin >> number;
        if(number == 0) {
            cout << "NULL\n";
        } else {
            if(number%2 == 0)
                (number > 0) ? cout << "EVEN POSITIVE\n" : cout << "EVEN NEGATIVE\n";
            else
                (number > 0) ? cout << "ODD POSITIVE\n" : cout << "ODD NEGATIVE\n";
        }
    }
}

int main() {
    int n;
    cin >> n;
    even_or_odd(n);
    return 0;
}