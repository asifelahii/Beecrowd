#include<bits/stdc++.h>

using namespace std;

int main()
{
    int N[6] = {};
    
    int i, count_positive=0;

    for(i=0; i<6; i++)// Taking input
        cin>>N[i];

    for(i=0; i<6; i++)
    {
        if(N[i] % 2 == 0)
            count_positive++;
    }
    cout << count_positive << " valores positivos" << endl;
}