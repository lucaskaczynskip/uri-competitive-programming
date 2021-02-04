#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, experiment = 0, rabbits = 0, rats = 0, frogs = 0, value;
    char type;
    cin >> n; 
    while(n--) {
        cin >> value >> type;
        experiment += value;
        if(type == 'C')
            rabbits += value;
        if(type == 'R')
            rats += value;
        if(type == 'S')
            frogs += value;
    }
    cout << "Total: " << experiment << " cobaias" << endl;
    cout << "Total de coelhos: " << rabbits << endl;
    cout << "Total de ratos: " << rats << endl;
    cout << "Total de sapos: " << frogs << endl;
    cout << "Percentual de coelhos: " << fixed << setprecision(2) << ((float)rabbits/(float)experiment)*100.00 << " %" << endl;
    cout << "Percentual de ratos: " << fixed << setprecision(2) << ((float)rats/(float)experiment)*100.00 << " %" << endl;
    cout << "Percentual de sapos: " << fixed << setprecision(2) << ((float)frogs/(float)experiment)*100.00 << " %" << endl;
    return 0;
}