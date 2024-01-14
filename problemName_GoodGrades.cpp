#include<iostream>
using namespace std;

int main()
{
    int percentage;
    cin >> percentage;

    if(percentage>=0 && percentage<=59){
        cout << 'F' << endl;
    }else if(percentage>=60 && percentage<=69){
        cout << 'D' << endl;
    }else if(percentage>=70 && percentage<=79){
        cout << 'C' << endl;
    }else if(percentage>=80 && percentage<=89){
        cout << 'B' << endl;
    }else if(percentage>=90 && percentage<=100){
        cout << 'A' << endl;
    }
    
    return 0;
}