/* Program of circular queue using array*/
# include<stdio.h>
# include<stdlib.h>
# define MAX 5

int a[MAX];
int front = -1;
int rear = -1;

void insertcq()
{
	int item,temp;
	temp = (rear+1)%MAX;
	if(temp==front)
	{
		printf("Queue is FULL \n");

	}
	else
	{
		if (front == -1) /*If queue is empty */
		{
			front = 0;
			rear = 0;
		}
		rear = temp;
		printf("Input the element for insertion in queue : ");
		scanf("%d", &item);
		a[rear] =item ;

	}
}
/*End of insert()*/

void deletecq()
{
	int item;
	if (front == -1)
	{
		printf("Queue Underflow\n");
	}
	else
	{
		item = a[front];
		a[front]=-1;
		printf("Element deleted from queue is : %d\n",item);
		if(front == rear) /* queue has only one element */
		{
			front = -1;
			rear=-1;
		}
		else
		{
		  front = (front+1)%MAX;
		}
	}
}/*End of del() */

void displaycq()
{
	int i;
	if(front == -1)
	{
		printf("Queue is empty\n");
	}
	else
	{
		for(i=0;i<MAX;i++)
		{
			printf("\t %d",a[i]);
		}
		printf("\n");
	}
}/*End of display() */


 main()
{
	int choice;

	while(1)
	{
		printf("1.Insert\n");
		printf("2.Delete\n");
		printf("3.Display\n");
		printf("4.Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1 :
				insertcq();
				break;
			case 2 :
				deletecq();
				break;
			case 3:
				displaycq();
				break;
			case 4:
				exit(0);
			default:
				printf("Wrong choice\n");
		}/*End of switch*/
	}/*End of while */
	//getch();
}/*End of main()*/
