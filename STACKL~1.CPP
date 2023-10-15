#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
//using namespace std;

int push();
int pop();
int top();
int peep();
int dis();
int update();
int n=0;
 struct stud
 {
	int  no;
	struct stud *next,*prev;

 } *temp,*first,*last,*new1;
 
 int main()
 {
 	
 	int ch;
 	system("cls");
 	
 	printf("1.insert\n");
 	printf("2.delet\n");
 	printf("3.exit\n");
 	printf("4.top of pos\n");
 	printf("5.find\n");
 	printf("6.display\n");
 	printf("7.update\n");
 	printf("\n total=%d \n",n);
 	
 	printf("Enter your choice=");
 	scanf("%d",&ch);
 	
 	switch(ch)
 	{
 		case 1:
 			push();
 			main();
 		case 2:
 			pop();
 			main();
 		case 3:
 			exit(0);
 			
 		case 4:
 			top();
 			main();
 		case 5:
 			peep();
 			main();
 		case 6:
		 	dis();
			 main();	
			case 7:
					update();
					main();
 		default:
 			printf("wrong");
	 }
	 
 }
 int push()
 {
 		new1=(struct stud *)malloc(sizeof(struct stud));

	printf("\nEnter the number=");
	scanf("%d",&new1->no);
	new1->next=0;
	new1->prev=0;

	if(first==0)
	{
		first=new1;
		last=new1;

	}
	else
	{
		last->next=new1;
		new1->prev=last;
		last=new1;


	}
	n++;
 }
 int pop()
 {
 		temp=last;
	 if(last==NULL)
	 {
		printf("LIST IS EMPTY");

	 }
	 else
	 {
		if(first==last)
		{
			first=last=NULL;
			free(temp);
		}
		else
		{
			last=last->prev;
			last->next=0;
			free(temp);
		}
	 }
	 getch();
	if(n>0)
	{
	 n--;
}
 }
 int top()
 {
 	printf("top of pos=%d",last->no);
	 getch();	
 }
 int peep()
 {
 
	int pos,j=0;
	temp=first;
	
	printf("Enter the find value=");
	scanf("%d",&pos);
	
	if(temp==0)
	{
		printf("empty");
		
	}
	else
	{
		while(temp!=0 && temp->no!=pos)
		{
			temp=temp->next;
		}
		if(temp->no==pos)
		{
		
		printf("find=%d",temp->no);
	}
	else
	{
		printf("not found");
	
	}
	}
	getch();
 }
 int dis()
 {
 		temp=first;
	while(temp!=NULL)
	{
		printf("%d->",temp->no);
		temp=temp->next;

	}
	printf("____________");
	temp=last;
	while(temp!=NULL)
	{
		printf("<-%d",temp->no);
		temp=temp->prev;
	}
	getch();
 }
 int update()
 {
 	
 	int pos,k=0;
 	temp=first;
 	
 	printf("Enter the find value=");
 	scanf("%d",&pos);
 	
 	if(temp==0)
 	{
 		printf("empty");
	 }
	 else
	 {
	 	while(temp!=0 && temp->no!=pos)
		 {
		 	temp=temp->next;
		 	k++;
		 }
		 if(k==0)
		 {
		 printf("not found");
		 }
		 else
		 {
		 
		 printf("Enter the update value=");
		 scanf("%d",&temp->no);
	}
	 }
	 getch();
 }
