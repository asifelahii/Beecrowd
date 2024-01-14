#include<iostream>
using namespace std;

void fibonacci(int num)
{
    int  i, t1=0, t2=1, nextTerm;

    for(i=1; i<=num; i++)
    {   cout << t1 << endl;
        nextTerm = t1+t2;
        t1 = t2;
        t2 = nextTerm; 
    }
    return;
    
}

int main()
{
    int n;
    cin >> n;

    fibonacci(n);
    //cout << fibonacci(n) << endl;

    return 0;
}