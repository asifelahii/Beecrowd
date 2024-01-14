#include<iostream>
using namespace std;

int main()
{
    int n, i, max=0;
    cin >> n;

    //Taking input
    int Arr[n];
    for(i=0; i<n; i++)
    {
        cin >> Arr[i];
    }

    //Finding maximum number
    for(i=0; i<n; i++)
    {
        if(Arr[i] > max)
        {
            max = Arr[i];
        }
    }

    cout << max << endl;
    return 0;
}