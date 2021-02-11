#include<stdio.h>
int main()
{
    char b;
    float mi,m=0,a;
    scanf("%c",&b);
    scanf("%f",&mi);
    if(b=='A')
    {
        mi=mi-200;
        m+=199;
        if(mi>0)
        {
            mi=mi*3;
            m=m+mi;
            a=(int)m+0.5;
            if(m>=a)
            {
                m=(int)m+1;
                printf("%.2f",m);
            }
            else
                printf("%.2f",m);
        }
        else
            printf("%.2f",m);
    }
    else if(b=='B')
    {
        m+=299;
        mi=mi-400;
        if(mi>0)
        {
            mi=mi*2;
            m=m+mi;
            a=(int)m+0.5;
            if(m>=a)
            {
                m=(int)m+1;
                printf("%.2f",m);
            }
            else
                printf("%.2f",m+0.07);
        }
        else
            printf("%.2f",m);
    }
    return 0;
}
