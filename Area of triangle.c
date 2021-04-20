#include<stdio.h>
#include<math.h>
int main()
{
    int a_b,b_c,c_a;
    float s,area;
    printf("Enter side of A and B");
    scanf("%d",&a_b);
    printf("Enter side of B and c");
    scanf("%d",&b_c);
    printf("Enter side of C and A");
    scanf("%d",&c_a);

    s = (a_b + b_c + c_a)/2;
    area = sqrt(s*(s-a_b)*(s-b_c)*(s-c_a));
    printf("%f",area);
    return 0;
}
