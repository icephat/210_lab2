#include<stdio.h>
int main()
{
   int a,b,c,x,y,z;
   char aa,bb,cc;
   scanf("%d %d %d",&a,&b,&c);
   scanf("%d%d%d",&aa,&bb,&cc);
   if(a<b&&a<c)
   {
       x=a;
       if(x==aa)
       {
           printf("%d",a);
       }

   }
   if(b>a&&b<c)
   {
       y=b;
   }
   if(c>a&&c>b)
   {
       z=c;
   }

    return 0;
}
