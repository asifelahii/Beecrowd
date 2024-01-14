#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    int code1, units1,  code2, units2;
    float price1, price2;
    double Value_to_Pay;

     cin >> code1 >> units1 >> price1;
    cin >> code2 >> units2 >> price2;

    Value_to_Pay = (units1 * price1) + (units2 * price2);


    //cout << showpoint;
    cout << fixed;
    cout << setprecision(2);
    cout << "VALOR A PAGAR :  R$ " << Value_to_Pay << endl;


    return 0;
}