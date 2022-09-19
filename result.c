#include<stdio.h>

int main()
{
    int eng,hindi,phy,math,chem;

    printf("Enter a marks of english: ");
    scanf("%d",&eng);
    printf("Enter a marks of hindi: ");
    scanf("%d",&hindi);
    printf("Enter a marks of physics: ");
    scanf("%d",&phy);
    printf("Enter a marks of maths: ");
    scanf("%d",&math);
    printf("Enter a marks of chemistry: ");
    scanf("%d",&chem);

    if(eng>=33&&hindi>=33&&phy>=33&&math>=33&&chem>=33)
        printf("Pass");
    else
        printf("Fail");

    return 0;

}
