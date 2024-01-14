#include<stdio.h>

int main()
{
    int x,y;
    scanf("%d %d",&x,&y);
     
    if(x==1)
    {
        float z = 4.00*y;
        printf("Total: R$ %.2f\n",z);
    }
    if(x==2)
    {
        float z = 4.50*y;
        printf("Total: R$ %.2f\n",z);
    }
    if(x==3)
    {
        float z = 5.00*y;
        printf("Total: R$ %.2f\n",z);
    }
    if(x==4)
    {
        float z = 2.00*y;
        printf("Total: R$ %.2f\n",z);
    }
    if(x==5)
    {
        float z = 1.50*y;
        printf("Total: R$ %.2f\n",z);
    }

    return 0;
}