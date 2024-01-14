#include<iostream>
using namespace std;
int main()
{
    int T, i, x, n, fuel_tank;
    cin >> T;

    while(T--)
    {
        // x = destination
        // n = number of fuel_tanks
        cin >> n >> x;
        x += 1;

        int gas_station[n];
        for(i=0; i<n; i++)
        {
            cin >> gas_station[i];
        }

        int destination[x];
        for(i=0; i<x; i++)
        {
            destination[i] = i;
            //cout << i << destination[i] << endl;

            if(gas_station[i] == i)
            {
                destination[i] = 1;
            }
            else{
                destination[i] = 0;
            }
        }

        for(i=0; i<x; i++)
        {
            cout << destination[i];
        }

        // fuel_tank = 0;
        // for(i=1; i<x; i++)
        // {
        //     fuel_tank = i;
        //     if(fuel_tank - gas_station[i] < 0)
        //     {
        //         continue;
        //     }
        //     else if(fuel_tank - gas_station[i] >= 0)
        //     {
        //         fuel_tank = i;
        //     }
        // }


    }
    return 0;
}