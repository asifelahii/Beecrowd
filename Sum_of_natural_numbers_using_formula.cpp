//Sum of N natural numbers using formula
#include<iostream>
using namespace std;

int sum_of_natural_number(int n)
{
    return (n*(n+1))/2;
}

int main()
{
    int n, sum;
    cin >> n;

    cout << sum_of_natural_number(n) << endl;

    return 0;
}