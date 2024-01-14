#include<stdio.h>

int *s, *t;

int main()
{
    int a = 10, b = 20;

    int *p, *q;     // declaring a pointer
    p = &a;
    q = &b;     // & = adress  || * = value 

    // printf("%d %d\n", a, b);
    // printf("%d %d\n", &a, &b);

    // printf("%d %d\n", p, q);
    // printf("%d %d\n", *p, *q);

    int temp = *p;
    *p = *q;
    *q = temp;
    
    pointer(p, q);

    return 0;
}

pointer(int *s, int *t)
{
    return printf("%d %d\n", *s, *t);
}