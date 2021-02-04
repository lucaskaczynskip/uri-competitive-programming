#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    double num1, num2, num3, num4;
    cin >> num1 >> num2 >> num3 >> num4;

    double average = (num1*0.2)+(num2*0.3)+(num3*0.4)+(num4*0.1);

    cout << "Media: " << fixed << setprecision(1) << average << endl;

    if(average >= 7.0)
        cout << "Aluno aprovado." << endl;
    if(average < 5.0)
        cout << "Aluno reprovado." << endl;
    if(average >=5.0 && average <=6.9) {
        cout << "Aluno em exame." << endl;
        
        double n;
        cin >> n;
        cout << "Nota do exame: " << n << endl;

        average = (average+n)/2;
        if(average >= 5.0)
            cout << "Aluno aprovado." << endl;
        if(average <= 4.9)
            cout << "Aluno reprovado." << endl;

        cout << "Media final: " << fixed << setprecision(1) << average << endl;
    }
}