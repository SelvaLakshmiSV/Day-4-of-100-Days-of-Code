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
/*Output
Enter a : 10
Enter b : 2
Addition of 10 and 2 is 12 .
Subraction of 10 and 2 is 8 .
Multiplication of 10 and 2 is 20 .
Division of 10 and 2 is 5.
Remainder when 10 divide by 2 is 0 .
*/
