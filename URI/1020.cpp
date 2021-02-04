#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n/365 << " ano(s)\n";
    n=(n%365);
    cout << n/30 << " mes(es)\n";
    cout << n%30 << " dia(s)\n";
}
