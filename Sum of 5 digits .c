#include<stdio.h>
int main()
{
    int sum = 0;
    int number = 12345;
    int newnumber = 0;
    //scanf("%d",&number);
    newnumber = number % 10;
    sum += newnumber;
    number /=10; 
    newnumber = number % 10;
    sum += newnumber;
    number/=10;    
    newnumber = number % 10;
    sum += newnumber;
    number /=10; 
    newnumber = number % 10;
    sum += newnumber;
    number /=10; 
    newnumber = number % 10;
    sum += newnumber;
    number /=10; 
    printf("%d ",sum);
    return 0; 
}
/*15*/
