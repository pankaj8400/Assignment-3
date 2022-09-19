#include<stdio.h>
int main()
{
 float sp,cp;
 float profit,loss;
 printf("Enter a Selling price: ");
 scanf("%d",&sp);
 printf("\nEnter a Coast price: ");
 scanf("%d",&cp);

 if(sp>cp)
 {
    profit= (sp-cp)*100/cp;
    printf("Profit is =%.2f ",profit);
 }
 else if(cp>sp)
   {
       loss= (cp-sp)*100/cp;
       printf("\nLoss is =%.2f ",loss);
   }
   else
       printf("No Profit No Loss");
 return 0;
}
