#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int insert();
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
		printf("4.display\n");
		printf("5.update\n");

	

		printf("Enter your choice=");
		scanf("%d",&ch);
	switch(ch)
	{


		case 1 :
			insert();
			main();
		case 2:
			delet();
			main();
	
		case 3:
				exit(0);
				main();
		
			
		case 4:
			dis();
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
		
		
		
		
		rear++;
		printf("Enter value=");
		scanf("%d",&a[rear]);
		printf("\n insertion sucessfull\n");
		
		if(front==-1)
		{
			front=0;
		}
	}
	
	getch();
}
int delet()
{
	if(front==-1)
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

	getch();
}
int dis()
{
	int i;
	 if(front==-1)
	 {
		printf("list is underflow");

	 }
	 else
	 {
		for(i=front;i<=rear;i++)
		{
			printf("\n%d",a[i]);
		}
	 }
	 getch();
}
int update()
{
	int find,f=0,i,upd;


	if(front==-1)
	{
		printf("list is empty");

	}
	else
	{	printf("Enter the find element=");
	scanf("%d",&find);
		for(i=front;i<=rear;i++)
		{
			if(find==a[i])
			{
				printf("find element=%d",a[i]);
				printf("\nEnter new value=");
				scanf("%d",&a[i]);
				f++;
			}
		}
			
	if(f==0)
	{
		printf("a nikal enter marin nathi aama value");
	}
	}
	getch();
	
}
