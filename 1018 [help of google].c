/*Bank Notes*/
//Accepted
#include<stdio.h>

int main()
{

    int tk,ntk;
    scanf("%d",&tk);

    printf("%d\n",tk);

    printf("%d nota(s) de R$ 100,00\n",tk/100);
    ntk = tk%100;

    printf("%d nota(s) de R$ 50,00\n",ntk/50);
    ntk = ntk%50;

    printf("%d nota(s) de R$ 20,00\n",ntk/20);
    ntk = ntk % 20;

    printf("%d nota(s) de R$ 10,00\n",ntk/10);
    ntk = ntk%10;

    printf("%d nota(s) de R$ 5,00\n",ntk/5);
    ntk = ntk%5;

    printf("%d nota(s) de R$ 2,00\n",ntk/2);
    ntk = ntk%2;

    printf("%d nota(s) de R$ 1,00\n",ntk/1);




    return 0;
}