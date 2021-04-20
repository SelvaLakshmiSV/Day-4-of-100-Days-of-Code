#include<stdio.h>
int main()
{
    int a = 4,b=3;
    printf("%d",a++++b);
    return 0;
}
/*error: lvalue required as increment operand
printf("%d",a+++++b);*/
