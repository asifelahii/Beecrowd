#include<iostream>
using namespace std;

int main()
{
    int n, i;
    cin >> n;

    int Arr[n];
    for(i=0; i<n; i++)
    {
        cin >> Arr[i];
    }

    int temp = Arr[0];
    for(i=0; i<n; i++)
    {
        if(temp > Arr[i])
        {
            cout << temp << " ";
            temp = Arr[i];
        }
    }
    return 0;
}