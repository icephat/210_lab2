#include<stdio.h>
int main()
{
    float b,t,sum;
    char a;
    scanf("%c",&a);
    scanf("%f",&b);
    if(a=='A')
    {
        sum=b-200;
        sum*=3;
        t=(int)sum+199;
    }
    else
    {
        sum=b-400;
        sum*=2;
        t=(int)sum+299;
    }
    printf("%.2f",t);




    return 0;
}
