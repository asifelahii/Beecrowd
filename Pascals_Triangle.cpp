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
int nCr(int n, int r)
{
    int nCr = factorial(n) / (factorial(n-r)*factorial(r));
    return nCr;
}

int main()
{
    int n, r, i, j;
    cin >> n;

    // factorial(n);

    for(i=0; i<n; i++)
    {
        for(j=0; j<=i;j++)
        {
            cout << nCr(i, j) << ' ';
        }
        cout << endl;
    }

    return 0;
}