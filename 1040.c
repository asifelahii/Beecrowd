//Average3
#include<stdio.h>

int main()
{
    float a,b,c,d;
    scanf("%f %f %f %f",&a,&b,&c,&d);

    double avr = ((a*2)+(b*3)+(c*4)+(d))/(2+3+4+1);
    printf("Media: %.1lf\n",avr);
    if(avr>7){
        printf("Aluno aprovado.\n");
        }
    if(avr<5){
        printf("Aluno reprovado.\n");
        }
    if(avr>=5 && avr<=6.9){
            printf("Aluno em exame.\n");

            float new_value;
            printf("Nota do exame: ");
            scanf ("%f",&new_value);

        double new_avr = (new_value+avr)/2;

            if(new_avr>=5.0){
            printf("Aluno aprovado.\n");
            }
            if(new_avr<4.9){
                printf("Aluno reprovado.\n");
            }

            printf("Media Final: %.1lf\n",new_avr);
        }
    

    return 0;
}