#include<stdio.h>
int main()
{
    int t, n, i, j, count_P=0, count_T=0;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        scanf("%d", &n);
        char s[n];

        scanf("%s", s);

        for(j=0; j<n; j++)
        {
            if(s[j] == 'T')
            {
                count_T ++;
            }
            else if(s[j] == 'P')
            {
                count_P ++;
            }
        }
        if(count_P > count_T)
        {
            printf("Pathaan\n");
        }
        else if(count_T > count_P)
        {
            printf("Tiger\n");
        }
        else if(count_P == count_T)
        {
            printf("Draw\n");
        }

        count_P = 0;
        count_T = 0;
    }
    
    return 0;
}
