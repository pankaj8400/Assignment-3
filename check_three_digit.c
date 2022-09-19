#include<stdio.h>

int main()
{
    int a=99,b=999,num;
    printf("Enter a three number: ");
    scanf("%d",&num);

    if(num>a&&num<b)
        printf("three digit number");
    else
        printf("not a three digit number");
    return 0;
}
