#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int insert();
int delet();
int dis();


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
	
	
		default :
			printf("wrong");
	}
	getch();
}
int insert()
{
	//system("cls");
	if((front==0 && rear==no-1) || (front==rear+1))
	{
		printf("circular queue is full");
	}
	
	else 
	{
	if(front==-1)
			{
			front=0;
			}
	if(rear==no-1 && front!=0)
		{
		rear=-1;
		}
		
		
		
		
		rear++;
		printf("Enter value=");
		scanf("%d",&a[rear]);
		printf("\n insertion sucessfull\n");
		

	
	
}
getch();
}
int delet()
{	
	if(front==-1 && rear==-1)
	{
				printf("circular queue is full");

	}

	else
	{
		printf("deleted value=%d",a[front]);
		front++;
			if(front-1==rear)
		{
			front=rear=-1;
		}
		if(front==no)
		{
			front=0;
		}
	

	}

	getch();
}
int dis()
{
	
	 if(front==-1)
	 {
		printf("list is empty");

	 }
	 else
	 
	 {
	 	int i;
		if(front<=rear)
		{
			for(i=front;i<=rear;i++)
			{
				printf("\n%d",a[i]);
			}
			
		}
		else  if(front>=rear)
		{
			for(i=front;i<=no-1;i++)
			{
				printf("\n%d",a[i]);
				
			}
				for(i=0;i<=rear;i++)
			{
				printf("\n%d",a[i]);
			}
		}
	 }
	 getch();
}

