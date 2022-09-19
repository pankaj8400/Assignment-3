#include<stdio.h>
int main()
{
  int num;

  printf("Enter any no: ");
  scanf("%d",&num);

  if(num%5==0)
   {
    printf("%d is Divisible by 5",num);
   }
  else
   {
    printf("%d is not Divisible by 5",num);
   }
   return 0;
}
