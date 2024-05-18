/*Bank Notes tried by my self*/
//Accepted
#include<stdio.h>

int main(){

    int tk;
    scanf("%d",&tk);

   // if(0<tk && tk<1000000){
        printf("%d\n",tk);

        int hundred,fifty,tweenty,ten,five,two,one;

        hundred = tk/100;
        printf("%d nota(s) de R$ 100,00\n",hundred);

        fifty = (tk%100)/50;
        printf("%d nota(s) de R$ 50,00\n",fifty);

        tweenty = ((tk%100)%50)/20;
        printf("%d nota(s) de R$ 20,00\n",tweenty);

        ten = (((tk%100)%50)%20)/10;
        printf("%d nota(s) de R$ 10,00\n",ten);

        five = ((((tk%100)%50)%20)%10)/5;
        printf("%d nota(s) de R$ 5,00\n",five);

        two = (((((tk%100)%50)%20)%10)%5)/2;
        printf("%d nota(s) de R$ 2,00\n",two);

        one = ((((((tk%100)%50)%20)%10)%5)%2)/1;
        printf("%d nota(s) de R$ 1,00\n",one);


  //  }

    return 0;
}