#include<iostream>
using namespace std;

int main()
{
    int n;//n is the amount of how much i drank
    cin >> n;

    int ans = 1000 - (n+(n/3));
    cout << ans << endl;
    
    return 0;
}