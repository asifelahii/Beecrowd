#include<stdio.h> 

int  main(){

    int Tdays,  years, weeks, days;

   printf("Enter total number of days: ");
   scanf("%d\n",&Tdays);
   years = Tdays / 365;
   weeks = (Tdays % 365) / 7;
   days = (Tdays %365) % 7;

   printf("Years: %d\n",years);
   printf("Weeks: %d\n",weeks);
   printf("Days: %d\n",days);
    
   return 0;
}