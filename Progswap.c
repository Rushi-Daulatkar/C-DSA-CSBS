#include<stdio.h>
void main()
{
    int a,b,temp;
    printf("\n Enter any two number");
    scanf("%d%d",&a,&b);
    printf("\n Before Swappinng A=%d B=%d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\n After Swappinng A=%d B=%d",a,b);
}
