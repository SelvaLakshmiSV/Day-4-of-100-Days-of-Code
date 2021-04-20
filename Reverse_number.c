#include<stdio.h>
int main()
{
     int a,b,n;
     long reverse_number = 0;
     printf("Enter a 5 digit number less than 32674 : ");
     scanf("%d",&n);
     a  = n%10;
     b  = n/10;
     reverse_number = reverse_number + a*10000L;
     
     a  = n%10;
     b  = n/10;
     reverse_number = reverse_number + a*1000;
  
     a  = n%10;
     b  = n/10;
     reverse_number = reverse_number + a*100;
     
     a  = n%10;
     b  = n/10;
     reverse_number = reverse_number + a*10;
       
     a  = n%10;
     reverse_number = reverse_number + a;
      
     return 0;
}
/*Output
Enter a 5 digit number less than 32674 : 12345
54321
*/
      












     return 0;
}
