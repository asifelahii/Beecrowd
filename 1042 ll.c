#include<stdio.h>
int main()
{
    int a, b,c;
    scanf("%d %d %d", &a, &b, &c);

    if(a>b)
    {
        if(a>c)
        {
            if(b>c)
            {
                printf("%d\n", a);
                printf("%d\n", b);
                printf("%d\n", c);
            }
            else{
                printf("%d\n", a);
                printf("%d\n", c);
                printf("%d\n", b);
            }
            
        }
    }

    printf("\n");
    printf("%d\n", a);
    printf("%d\n", b);
    printf("%d\n", c);

    return 0;
}