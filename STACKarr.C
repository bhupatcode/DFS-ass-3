#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int push();/* inser a value*/
int top1();/* print top of most value */
int delet();/* delete last value*/
int dis();/* display all value */
int peep();/* find a value in a list */

int top=-1,no=0,no1=0;
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
		printf("3.top of pos\n");
		printf("4.exit\n");
		printf("5.display\n");
		printf("6.find element\n");

		printf("\n top=%d\n",top);

		printf("Enter your choice=");
		scanf("%d",&ch);
	switch(ch)
	{


		case 1 :
			push();
			main();
		case 2:
			delet();
			main();
		case 3:
			top1();
			main();
		case 4:
				exit(0);
				main();
		case 5:
			dis();
			main();
		case 6:
			peep();
			main();
		default :
			printf("wrong");
	}
	getch();
}
int push()
{
	//system("cls");
	if(top>=no-1)
	{
		printf("list is overflow");
	}
	else
	{
		top++;
		printf("Enter value=");
		scanf("%d",&a[top]);

	}
	getch();
}
int delet()
{
	if(top==-1)
	{
		printf("list is underflow");
	}
	else
	{
		printf("deleted value=%d",a[top]);
		top=top-1;

	}
	getch();
}
int top1()
{
	if(top==-1)
	{
		printf("list is underflow");
	}
	else
	{
		printf("top most value=%d",a[top]);
	}
	getch();
}
int dis()
{
	 int i;
	 if(top==-1)
	 {
		printf("list is underflow");

	 }
	 else
	 {
		for(i=0;i<=top;i++)
		{
			printf("\n%d",a[i]);
		}
	 }
	 getch();
}
int peep()
{
	int find,f=0,i;
	printf("Enter the find element=");
	scanf("%d",&find);

	if(top==-1)
	{
		printf("list is empty");

	}
	else
	{
		for(i=0;i<=top;i++)
		{
			if(find==a[i])
			{
				printf("find element=%d",a[i]);
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
