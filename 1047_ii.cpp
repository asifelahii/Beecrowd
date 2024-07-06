#include<iostream>
#include<cmath>
using namespace std;

void calculateTime(int i, int j, int k, int l)
{
    int hour, min;
    
    hour = k-i;
    if(hour < 0)
    {
        hour = 24 - abs(k-i);
    }
    min = l-j;
    if(min < 0)
    {
        min += 60;
        hour -= 1;
    }
    cout << "O JOGO DUROU " << hour << " HORA(S) E " << min << " MINUTO(S)" << endl;
}


int main()
{
    int ih, im, eh, em;// i=initial, e=end, h=hour, m=minute
    cin >> ih >> im >> eh >> em;

    if(ih == eh && im == em)
    {
        cout << "O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)" << endl;
    }
    else{
        calculateTime(ih, im, eh, em);
    }

    return 0;
}