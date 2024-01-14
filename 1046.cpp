//Beecrowd--> 1046-Game Time

#include<iostream>
using namespace std;

int method_1(int a ,int b)
{
    return (24-a) + b;
}
int method_2(int c, int d)
{
    return c-d;
}

int main()
{
    int st, et; // st=starting time ; et=end time;
    cin >> st >> et;

    if(st >= et)
    {
        cout << "O JOGO DUROU " << method_1(st, et) << " HORA(S)" << endl;
    }else{
        cout << "O JOGO DUROU " << method_2(et, st) << " HORA(S)" << endl;
    }
}