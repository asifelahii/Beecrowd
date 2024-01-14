#include<iostream>
using namespace std;

void factorial(int n)
{
    int i, fact = 1;
    for(i=2; i<=n; i++)
    {
        fact *= i; 
    }
    cout << fact << endl;
}

int main()
{
    int n;
    cin >> n;

    factorial(n);

    return 0;
}