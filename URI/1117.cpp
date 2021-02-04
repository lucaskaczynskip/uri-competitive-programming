#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double grades, average = 0;
    int i = 0;
    do {
        cin >> grades;
        if(grades >= 0 && grades <= 10) {
            average += grades;
            i++;
        } else {
            cout << "nota invalida" << endl;
        }
    } while(i < 2);
    cout << "media = " << fixed << setprecision(2) << average/i << endl;
    return 0;
}