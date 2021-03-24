#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int b;
    printf("Give binary number.\n\n");
    scanf("%d",&b);
    int dec=0,i=0;
    int a;
    while(b>0)
    {
        a=b%10;
        dec=dec+a*pow(2,i);
        i++;
        b=b/10;
    }
    printf("\nDecimal number is %d.\n",dec);
    return 0;
}
