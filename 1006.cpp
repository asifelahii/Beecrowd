#include<iostream>
#include<iomanip>
using namespace std;

int main()
    {
        double a,b,c,Avr;
        

        cin >> a >> b >> c;

        Avr = ((a*2)+(b*3)+(c*5)) / (2 + 3 + 5);

        cout << fixed;
        cout << setprecision(1);

        cout << "MEDIA = " << Avr << endl;


        return 0;
    }