/*Conerting age into year,month & day*/
#include<stdio.h>

int main()
{
    int age,year,month,days;
    scanf("%d",&age);

    year = age/365;
    month = (age-(365*year))/30;
    days = age-(365*year)-(30*month);

    printf("%d ano(s)\n",year);
    printf("%d mes(es)\n",month);
    printf("%d dia(s)\n",days);


    return 0;
}