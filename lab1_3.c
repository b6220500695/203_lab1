#include <stdio.h>
int main(){
    int S,X1,X2;
    printf("Plese insert X1 and S\n");
    scanf ("%d%d",&X1,&S);
    if (S>-1000<X1 || S<1000<X1)
    {
       X2 = (S*2)-X1;
    printf("X2 = %d",X2);
    }
    else
   printf("Error!! Please insert new value");
}
