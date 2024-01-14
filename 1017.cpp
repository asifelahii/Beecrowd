#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
    int time,avr_speed;

    cin >> time >> avr_speed;

    double distance = time * avr_speed;
    double need_fuel = distance / 12;

    cout << fixed;
    cout << setprecision(3);
    
    cout << need_fuel << endl;



    return 0;
}