#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int inser();
int delet();
int dis();
int update();


int front=-1,rear=-1,no=0,no1=0,n;
int a[100];
int main()
{
	int ch;
		system("cls"); /* like clrscr(); */
		if(no1==0)
		{
			printf("Enter the size of arry=");
			scanf("%d",&no);
			no1++;
		}

	       system("cls");
		printf("1.insert \n");
		printf("2.delete \n");
		printf("3.exit\n");
		printf("5.display\n");
		printf("6.update\n");

		printf("\n total=%d\n",n);

		printf("Enter your choice=");
		scanf("%d",&ch);
	switch(ch)
	{


		case 1 :
			inser();
			main();
		case 2:
			delet();
			main();
		case 4:
			dis();
			main();
		case 3:
				exit(0);
				main();
		case 5:
			update();
			main();
	
		default :
			printf("wrong");
	}
	getch();
}
int insert()
{
	//system("cls");
	if(rear==no-1)
	{
		printf("list is overflow");
	}
	else
	{
		if(front==-1)
		{
			front=0;
		}
		
		
		
		rear++;
		printf("Enter value=");
		scanf("%d",&a[rear]);
		printf("\n insertion sucessfull\n");
	}
	n++;
	getch();
}
int delet()
{
	if(front==rear)
	{
		printf("list is underflow");
	}
	else
	{
		printf("deleted value=%d",a[front]);
		front++;
		if(front>rear)
		{
			front=rear=-1;
		}

	}
	if(n>0)
	{
		n--;
	}
	getch();
}
int dis()
{
	int i;
	if(rear==-1)
	{
		printf("Empty");
	}
	else
	{
	
	
	for(i=front;i<=rear;i++)
	{
		printf("%d",a[i]);
	}
}
	getch();
}
int update()
{
	
}
