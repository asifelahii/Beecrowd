#include<stdio.h>
int main()
{
    int x = 5;
    int * px = &x;
    int y = *px;

    int a = 5;
    int * pa = &a;
    int b = *pa;

    printf("%d  %d\n",x,(void*)px);
    printf("%d  %d\n",a,(void*)pb);

    return 0;
}