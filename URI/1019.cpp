#include <iostream>

using namespace std;

int main() {
    int time;
    cin >> time;
    cout << time/3600 << ":" << (time%3600)/60 << ":" << time%60 << "\n";
}
