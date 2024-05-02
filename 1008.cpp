#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    int Emp_num,work_hour;
    double salary,rate_per_hour;

    cin >> Emp_num >> work_hour >> rate_per_hour;

    salary = work_hour * rate_per_hour;

    cout << "NUMBER = " << Emp_num << endl;

    cout << fixed;
    cout << setprecision(2);

    cout << "SALARY = U$ " << salary << endl;





    return 0;
}