#include<stdio.h>
int main()
{
  int number;
  scanf("%d",&number);
  if(number == 5)
  {
     printf("BINGO ! Hurray You win the match .");
  }
  else if(number >5){
     pintf("Your guess is too big.");
    
  }
  
  else{
    printf("You guess is too small ");
  }
}
