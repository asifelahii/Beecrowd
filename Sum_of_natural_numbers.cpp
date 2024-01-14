//Sum of N natural numbers using loop
#include<iostream>
using namespace std;

int sum_of_natural_number(int n)
{
    int i, temp=0;
    for(i=0; i<=n; i++)
    {
        temp += i;
    }
    return temp;
}

int main()
{
    int n;
    cin >> n;
    cout << sum_of_natural_number(n) << endl;
    
    return 0;
}