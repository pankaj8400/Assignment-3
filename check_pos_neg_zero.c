#include<stdio.h>

int main()
{
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num>0)
        printf("Positive no");
    else if(num<0)
        printf("Negative no");
    else
        printf("This no is zero");
    return 0;
}
