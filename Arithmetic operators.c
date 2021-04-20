#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a : ");
    scanf("%d",&a);
    printf("Enter b : ");
    scanf("%d",&b);
    printf("Addition of %d and %d is %d .\n",a,b,a+b);
    printf("Subraction of %d and %d is %d .\n",a,b,a-b);
    printf("Multiplication of %d and %d is %d .\n",a,b,a*b);
    printf("Division of %d and %d is %d.\n",a,b,a/b);
    printf("Remainder when %d divide by %d is %d . \n10",a,b,a%b);
    return 0;
}
