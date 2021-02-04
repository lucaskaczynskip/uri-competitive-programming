#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {
    double a, b, c;
    cin >> a >> b >> c;
    double delta=pow(b, 2)-(4*a*c), x1, x2;
    if(a==0||b==0||c==0||delta<0){
        cout << "Impossivel calcular\n";
    }else{
        x1=((-b)+sqrt(delta))/(2*a);
        x2=((-b)-sqrt(delta))/(2*a);
        cout << "R1 = " << fixed << setprecision(5) << x1 << "\n";
        cout << "R2 = " << fixed << setprecision(5) << x2 << "\n";
    }
}
