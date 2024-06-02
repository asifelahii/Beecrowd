#include<stdio.h>

int main()
{
    float tk;
    int ntk;

    scanf("%f",&tk);
    printf("NOTAS:\n");

    int hundreed = tk/100;
    printf("%d nota(s) de R$ 100.00\n",hundreed);
    hundreed = tk;
    ntk = (hundreed%100);

    printf("%d nota(s) de R$ 50.00\n",(ntk/50));
    ntk = (ntk%50);

    printf("%d nota(s) de R$ 20.00\n",(ntk/20));
    ntk = (ntk%20);

    printf("%d nota(s) de R$ 10.00\n",(ntk/10));
    ntk = (ntk%10);

    printf("%d nota(s) de R$ 5.00\n",(ntk/5));
    ntk = (ntk%5);

    printf("%d nota(s) de R$ 2.00\n",(ntk/2));
    ntk = (ntk%2);


    printf("MOEDAS:\n")

    printf("%d moeda (s) de R$ 1.00\n",(ntk/1));
    ntk = (ntk%1);

    printf("%d moeda (s) de R$ 1.00\n",(ntk/0.50));
    ntk = (ntk%0.50);

    printf("%d moeda (s) de R$ 1.00\n",(ntk/0.25));
    ntk = (ntk%0.25);


    


    return 0;
}