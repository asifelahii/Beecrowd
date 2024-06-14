// Problem number 1052
#include<bits/stdc++.h>
#include<string.h>

using namespace std;

int main()
{
    string month[12] = { "January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};

    int n;// number of the month {1=Jan, 2=Feb, 3=Mar, 4=Apr, 5 & so on}
    cin >> n;
    cout << month[n-1] << endl;
}