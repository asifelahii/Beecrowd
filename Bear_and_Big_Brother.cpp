// https://codeforces.com/problemset/problem/791/A
// Bear and Big Brother

#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Limaks_weight, Bobs_weight, count=0;
    cin >> Limaks_weight >> Bobs_weight;

    while(Bobs_weight >= Limaks_weight)
    {
        Bobs_weight *= 2;
        Limaks_weight *= 3;
        count++;
    }
    cout << count << endl;
    return 0;
}