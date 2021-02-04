#include <iostream>
#include <iomanip>
using namespace std;

int main() {

    char name[60];
    double fixed_salary, sales_amount;

    cin >> name >> fixed_salary >> sales_amount;

    double salary = fixed_salary + (sales_amount * 0.15);

    cout << "TOTAL = R$ " << fixed << setprecision(2) << salary << endl;

   return 0;
}
