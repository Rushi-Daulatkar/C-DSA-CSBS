#include <stdio.h>
#define MAX 10

void binary(int *a);

int main()
{
    int arr[MAX], i;
    printf("\n Enter %d Elements: ", MAX);
    for (i = 0; i < MAX; i++)
    {
        scanf("%d", &arr[i]);
    }
    binary(arr);
    return 0;
}

void binary(int *a)
{
    int num, low, high, mid, flag = 0;
    printf("\n Enter the number you want to search: ");
    scanf("%d", &num);
    low = 0;
    high = MAX - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (a[mid] == num)
        {
            printf("\n Search is Successful ");
            flag = 1;
            printf("\n Element is present at position %d", mid);
            break;
        }
        else
        {
            if (a[mid] < num)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }
    if (flag == 0)
    {
        printf("\n Search is unsuccessful: Element is not present");
    }
}
