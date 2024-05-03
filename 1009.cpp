#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    double salary,sold_value;
    char name[20];

    cin >> name;
    cin >> salary >> sold_value;

    double salary_with_bonus = (int)salary + ((sold_value*15) / 100);

    cout << fixed;
    cout << setprecision(2);

    cout << "TOTAL = R$ " << salary_with_bonus << endl;
     
    
    return 0;
}