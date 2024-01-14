#include<stdio.h>

int main()
{
    int y;
    scanf("%d",&y);

    if(0<=y)
    {
        if(y%4==0 && y%100!=0)
        {
            int ny;
            ny = y+4;
            printf("%d\n",ny);
        }
    if((y+1)%4==0 && y%100!=0)
        {
            
            int i = (y+1);
            printf("%d\n",i);
        }
    if((y+2)%4==0 && y%100!=0)
        {
            
            int i = (y+2);
            printf("%d\n",i);
            }
    if((y+3)%4==0 && y%100!=0)
        {
            int i = (y+3);
            printf("%d\n",i);
        }
    
    }
    


    return 0;
}
