#include<stdio.h>
#include<conio.h>
#include<stdlib.h>


int inqueue();
int dequeue(); 
int dis();
int update();
int search();
int n=0;
 struct stud
 {
	int  no;
	struct stud *next,*prev;

 } *temp,*front,*rear,*new1;
 
 int main()
 {
 	
 	int ch;
 	system("cls");
 	
 	printf("1.inqueue\n");
 	printf("2.dequeue\n");
 	printf("3.exit\n");
 	printf("4.update\n");
 	printf("5.display");
 	printf("6.search\n");
	 printf("\n total=%d \n",n);
 	
 	printf("Enter your choice=");
 	scanf("%d",&ch);
 	
 	switch(ch)
 	{
 		case 1:
 			inqueue();
 			main();
 		case 2:
 			dequeue();
 			main();
 		case 3:
 			exit(0);
 			
 		case 4:
 			update();
 			main();
 		case 5:
 				dis();
 				main();
 				
 	 case 6:
 	 		search();
 	 		main();
 		default:
 			printf("wrong");
	 }
	 
 }
 int inqueue()
 {
 		new1=(struct stud *)malloc(sizeof(struct stud));

	printf("\nEnter the number=");
	scanf("%d",&new1->no);
	new1->next=0;
	new1->prev=0;

	if(front==0)
	{
		front=new1;
		rear=new1;

	}
	else
	{
		rear->next=new1;
		new1->prev=rear;
		rear=new1;


	}
	n++;
 }
 int dequeue()
 {
 		temp=front;
	 if(rear==NULL)
	 {
		printf("LIST IS EMPTY");

	 }
	 else
	 {
	 	
		if(front==rear)
		{
			front=rear=NULL;
			printf("\n deletd=%d",temp->no);
			free(temp);
			
		}
		else
		{
			front=front->next;
			front->prev=0;
			printf("\n deletd=%d",temp->no);
			free(temp);
		}
		printf("deleted sucessfully");
	 }
	 getch();
	if(n>0)
	{
	 n--;
}
 }
 int dis()
 {
 		temp=front;
	while(temp!=NULL)
	{
		printf("%d->",temp->no);
		temp=temp->next;

	}
	printf("____________");
	temp=rear;
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
 	temp=front;
 	
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
		 if(pos==temp->no)
		 {
		   
		 printf("Enter the update value=");
		 scanf("%d",&temp->no);
		}
		else
		{
			printf("not found");
		}
	 }
	 getch();
 }
 int search()
 {
 	
 	int pos,k=0;
 	temp=front;
 	
 	
 	if(temp==0)
 	{
 		printf("empty");
	 }
	 else
	 {
	 	printf("Enter the find value=");
 	scanf("%d",&pos);
 	
	 	while(temp!=0 && temp->no!=pos)
		 {
		 	temp=temp->next;
				k++;		 	
		 }
		 if(pos==temp->no)
		 {
		   
		printf("find value%d",temp->no);
		}
		else if(pos!=temp->no)
		{
			printf("not found");
			getch();
		}
	 }
	 getch();
 }
