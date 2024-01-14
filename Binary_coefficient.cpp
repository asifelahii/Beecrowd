#include<iostream>
using namespace std;

int factorial(int n)
{
    int i, fact = 1;
    for(i=2; i<=n; i++)
    {
        fact *= i; 
    }
    return fact;
}

int main()
{
    int n, r;
    cin >> n >> r;

    // factorial(n);
    // factorial(r);
    // factorial(n-r);

    //Calcuating binary co-efficient, nCr = n! / ((n-r)! * r!)
    int nCr = factorial(n) / (factorial(n-r)*factorial(r));
    cout << nCr << endl;

    return 0;
}