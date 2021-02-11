#include<stdio.h>
int main()
{
    char a,b;

    scanf("%c",&a);
    scanf("%d",&b);
    if(a>=65&&a<=73)
    {
        if(b%2!=0)
        {
            if(b==5||b%10==5)
            {
                printf("\(^_^)/");
            }
            else
            {
                printf("(^_^)");
            }

        }
        else
        {
            printf("{@_@}");
        }
    }
    else if(a>=74&&a<=82)
    {
          if(b%2!=0)
        {
            if(b==5||b%10==5)
            {
                printf("\(*o*)/");
            }
            else
            {
                printf("(*o*)");
            }

        }
        else
        {
            printf("{*v*}");
        }
    }
    else if(a>=83&&a<=90)
    {
        if(b%2!=0)
        {
            if(b==5||b%10==5)
            {
                printf("\(T_T)/");
            }
            else
            {
                printf("(T_T)");
            }

        }
        else
        {
            printf("{x_x}");
        }
    }

    return 0;
}
