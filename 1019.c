/*Time Convertion*/
#include<stdio.h>

int main()
{
    int inputed_sec;

    scanf("%d",&inputed_sec);

    int hour,min,sec;

    hour = inputed_sec/3600;
    min = (inputed_sec-(3600*hour))/60;
    sec = (inputed_sec-(3600*hour))-(min*60);

    printf("%d:%d:%d\n",hour,min,sec);


    return 0;
}