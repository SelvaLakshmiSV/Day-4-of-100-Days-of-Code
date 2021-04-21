#include<stdio.h>
int main()
{
    int inc,b = 3;
    inc = (b>5)&&(b++);
    printf("%d \n",inc);
    printf("%d",b);
    return 0;

}
/*
0
3
*/
