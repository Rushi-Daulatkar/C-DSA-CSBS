#include<stdio.h>
int main()
{
    int a[10];
    int i,num,flag=0,pos;
    printf("\n Enter 10 Elements :");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("\n Enter the number you want to search: ");
    scanf("%d",&num);
    for(i=0;i<10;i++)
    {
        if(a[i]==num)
        {
            printf("\n Search is Successful ");
            pos=i+1;
            flag=1;
            printf("\n Element is present at position %d",pos);
            break;
        }
    }
    if(flag==0)
    {
        printf("\n Search is unsuccessful: Element is not present");
    }
}
