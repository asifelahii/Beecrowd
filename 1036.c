/*
    Bhaskara`s Formula = (-b +- sqrt((B*b)-(4*a*c))) / (2*a)
    R1 = (-b + sqrt((b*b)-(4*a*c))) / (2*a);---> Positive value
    R2 = (-b - sqrt((b*b)-(4*a*c))) / (2*a);---> Negative Value
*/
#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,temp,R1,R2;
    scanf("%lf %lf %lf",&a,&b,&c);

    temp =(b*b)- (4*a*c);
    R1 = (-b + sqrt(temp)) / (2*a);
    R2 = (-b - sqrt(temp)) / (2*a);

    if(temp<0 && 2*a==0)
    {
        printf("Impossivel calcular\n");
    }
    if(temp<0 || 2*a==0)
    {
        printf("Impossivel calcular\n");
    }
    else{
        printf("R1 = %.5lf\n",R1);
        printf("R2 = %.5lf\n",R2);
    }




    return 0;
}