#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    cout << fixed << setprecision(3);

    double a, b, c;
    cin >> a >> b >> c;

    double PI = 3.14159, triangle, circle, trapezium, square, rectangle;
    triangle = (a * c) / 2;
    circle = PI * (c * c);
    trapezium = ((a + b) * c) / 2;
    square = b * b;
    rectangle = a * b;

    cout << "TRIANGULO: " << triangle << "\n";
    cout << "CIRCULO: " << circle << "\n";
    cout << "TRAPEZIO: " << trapezium << "\n";
    cout << "QUADRADO: " << square << "\n";
    cout << "RETANGULO: " << rectangle << "\n";

    return 0;
}
