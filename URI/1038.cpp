#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    cout << fixed << setprecision(2);

    int itemID, itemsNumber;
    cin >> itemID >> itemsNumber;

    double value;
    
    if(itemID==1)
        value=itemsNumber*4.00;
    if(itemID==2)
        value=itemsNumber*4.5;
    if(itemID==3)
        value=itemsNumber*5.0;
    if(itemID==4)
        value=itemsNumber*2.0;
    if(itemID==5)
        value=itemsNumber*1.5;

    cout << "Total: R$ " << value << "\n";
}