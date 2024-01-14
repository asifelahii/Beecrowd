#include<iostream>
using namespace std;

int main()
{
    int a, b, c, min, max;
    cin >> a >> b >> c;

    //Finding min
    if(a <=b && a <= c)
    {
        min = a;
    }
    else if(b <= a && b <= c)
    {
        min = b;
    }
    else{
        min = c;
    }

    //Finding max
    if(a>= b && a >= c)
    {
        max = a;
    }
    else if(b >= a && b >= c)
    {
        max = b;
    }
    else{
        max = c;
    }

    cout << min << " " << max << endl;
    return 0;
}