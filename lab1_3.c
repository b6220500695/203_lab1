#include<stdio.h>
int main()
{
   long int n,x,y;
   scanf("%ld",&n);
   if(n>=0)
   {
      x=n%3;
      y=n%11;
   }
   printf("%ld %ld",x,y);
}
