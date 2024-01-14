#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double Aweight,Bweight,A,B,Avr,sum;
    Aweight = 3.5;
    Bweight = 7.5;

    cin >> A >> B;

    sum = (Aweight * A) + (Bweight * B);
    Avr = sum / (3.5 + 7.5);

    cout << fixed;
    cout << setprecision(5);

    cout << "MEDIA = " << Avr << endl;

    return 0;
}