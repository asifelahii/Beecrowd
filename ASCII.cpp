#include<iostream>
using namespace std;

int main()
{
    char x;
    cin >> x;
    
    int i, y = int (x);

    for(i=48; i<123; i++)
    {
        if(y>=48 && y<=58)
        {
            cout << "IS DIGIT" << endl;
            break;
        }
        else if(y>=59 && y<=90)
        {
            cout << "ALPHA" << endl << "IS CAPITAL" << endl;
            break;
        }
        else {
            cout << "ALPHA" << endl << "IS SMALL" << endl;
            break;
        }
    }
    return 0;
}