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

    int temp = 0;
    for(i=0; i<n; i++)
    {
        if(Arr[i] < temp)
        {
            temp = Arr[i];
            cout << temp;
        }
    }
    return 0;
}