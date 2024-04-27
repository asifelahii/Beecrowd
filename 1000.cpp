#include<stdio.h>
int main()
{
    int n,r,temp,dn = 0; // dn = desired number
    scanf("%d", &n);
    temp = n;


    
    while(n > 0)
    {
        r = temp % 10;
        if(r == 7)
        {
            dn = 1;
            break;
        }
        n = n / 10;
    }

    if(dn)
    {
        printf("Yes/n");
    }
    else{
        printf("No\n");
    }
    

    return 0;
}