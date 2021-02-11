#include <stdio.h>
int main()
{
    int d,m,x,fd;
    scanf("%d %d",&d,&m);
    if(m==4||m==6||m==9||m==11)
    {
        x=d+30;
        fd=x%7;
    }
    else if(m==2)
    {
        x=d+28;
        fd=x%7;
    }
    else
    {
        x=d+31;
        fd=x%7;
    }

    if(fd==0)
    {
        fd=7;
    }
    printf("%d",fd);
}
