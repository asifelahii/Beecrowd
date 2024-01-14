#include<iostream>
using namespace std;

int main()
{
    int t;
    long int n;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> n;
        if(n%3 == 0)
        {
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}