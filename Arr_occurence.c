#include<stdio.h>
int main()
{
    int a[10];
    int i,num,count=0;
    printf("\n Enter 10 Elements :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the number: ");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(a[i]==num)
        {
            count++;
        }
    }
    printf("\n Total Occurence of %d is %d",num,count);
}
