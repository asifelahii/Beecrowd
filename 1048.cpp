#include<iostream>
#include<iomanip>
using namespace std;

int calculateSalary(int Rate,float salary)
{
        float Readjustment = (salary / 100) * Rate;
        salary += Readjustment;

        cout << "Novo salario: " << fixed << setprecision(2) << salary << endl;
        cout << "Reajuste ganho: " << fixed << setprecision(2) << Readjustment << endl;
        cout << "Em percentual: " << Rate << " %" << endl;
}

int main()
{
    float salary;
    cin >> salary;

    if (salary > -1 && salary <= 400.00)
    {
        calculateSalary(15, salary);
    }
    else if (salary > 400.00 && salary <= 800.00)
    {
        calculateSalary(12, salary);
    }
    else if (salary > 800.00 && salary <= 1200.00)
    {
        calculateSalary(10, salary);
    }
    else if (salary > 1200.00 && salary <= 2000.00)
    {
        calculateSalary(7, salary);
    }
    else
    {
        calculateSalary(4, salary);
    }

    return 0;
}