#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    int number, hours;
    float hours_salary;

    cin >> number >> hours >> hours_salary;

    float salary = hours * hours_salary;

    cout << "NUMBER = " << number << "\n";
    cout << "SALARY = U$ " << fixed << setprecision(2) << salary << "\n";

    return 0;
}
