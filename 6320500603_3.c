#include <stdio.h>
int main()
{
    int a[3]={},i,mi,j,x,b,c;
    char y[3]={};

    for(i=0;i<3;i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0;i<3-1;i++)
    {
        for(j=0;j<3-1;j++)
        {
            if(a[j]>a[j+1])
            {
                mi = a[j+1];
                a[j+1] = a[j];
                a[j] = mi;
            }
        }
    }
    x = a[0];
    b = a[1];
    c = a[2];

    scanf("%s",y);

    for(i=0;i<3;i++)
    {
        if(y[i]=='A')
        {
            a[i] = x;
        }
        else if(y[i]=='B')
        {
            a[i] = b;
        }
        else if(y[i]=='C')
        {
            a[i]= c;
        }
    }
    for(i=0;i<3;i++)
    {
        printf("%d ",a[i]);
    }
    return 0;

}
