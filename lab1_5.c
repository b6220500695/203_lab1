#include <stdio.h>
int main()
{
    int n,sum,i;
    scanf("%d",&n);
    int number[n];
    for (i=0;i<n;i++)
    {
        scanf("%d",&number[i]);
    }

    sum = number[0];
    for (i=1;i<n;i++)
    {
        if(sum < number[i])
        {
            sum = number[i];
        }
    }

    for (i=0;i<n;i++)
    {
        if(sum == number[i])
        {
            printf("%d %d",i+1,number[i]);
            break;
        }
    }
    return 0;
}
