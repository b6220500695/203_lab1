#include <stdio.h>
#include <math.h>
int main()
{
   int N,i,input,max;
   scanf("%d\n",&N);
   for(i = 0; i < N; i++)
   {
   scanf("%d", &input);
   if(i==0 || input > max)
        {
            max = input;
        }
    }
   printf("%d\n", max);
}

