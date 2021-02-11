#include<stdio.h>
int main()
{
    int t,t2;
    char pro;
    float ti,i=0;
    scanf ("%c",&pro);
    scanf ("%f",&ti);
    t = ti;
    t2 = ti*100;
    t2 = t2%100;
    if (pro == 'A')
    {
         i = i+199;
         if (ti>200)
        {
        t = t-200;
        i += t*3;
        i += t2*3/60.0;
        }
    }
    else if(pro =='B')
    {
         i = i+299;
         if(ti>400)
         {
            t = t-400;
            i += t*2;
            i += t2*2/60.0;
         }
    }
    printf("%.2f",i);
    return 0;
}
