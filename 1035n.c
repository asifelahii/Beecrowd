#include<stdio.h>

int main()
{
    int a,b,c,d;
    scanf("%d %d %d %d",&a,&b,&c,&d);

    int ab,cd;
    ab = a+b;
    cd = c+d;

    if(a%2==0 && b>c && d>a && cd>ab && c>=0 && d>=0 )
    {
       
                    printf("Valores aceitos\n");
               
    }
    
    else{
        printf("Valores nao aceitos\n");
    }


    return 0;
}