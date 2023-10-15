 #include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int push();
int pop();
int peep();
int dis();
int update();
int n=0;
 struct stud
 {
	int  no;
	struct stud *next;

 } *temp,*first,*last,*new1;
 
 int main()
 {
 	
 	int ch;
 	system("cls");
 	
 	printf("1.insert\n");
 	printf("2.delet\n");
 	printf("3.exit\n");
 	printf("4.find\n");
 	printf("5.display\n");
 	printf("6.update\n");
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
 			peep();
 			main();
 		case 5:
		 	dis();
			 main();	
			case 6:
					update();
					main();
 		default:
 			printf("wrong");
	 }
	 
 }
 int push()
 {
	new1=(struct stud*)malloc(sizeof (struct stud));

printf("no=");
scanf("%d",&new1->no);

new1->next=0;

if(first==0)
{

first=new1;
last=new1;
}
else
{
last->next=new1;
last=new1;

}
n++;
getch();
 	
 }
 int pop()
 {
int i;

 temp=first;

for(i=1;i<=n-2;i++)
{
 temp=temp->next;
}
free(last);
last->next=0;
n--;



 }

 int dis()
 {
 	int i;

temp=first;

for(i=1;i<=n;i++)
{
if(i==n)

printf("%d",temp->no);
else
 printf("%d->",temp->no);

 temp=temp->next;

}
getch();

 }
 int update()
 {
 	
 	int pos;
 	temp=first;
 	
 	printf("Enter the value=");
 	scanf("%d",&pos);
 	
 	while(temp!=0 && temp->no!=0)
 	{
 		temp=temp->next;
	 }
	 printf("Enter new value");
	 scanf("%d",&pos);
	 
	 getch();
 }
 int peep()
 {
 	
 }
