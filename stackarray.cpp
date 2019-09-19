#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],top=-1,top2=MAX-1;
void insBeg();
//void insEnd();
void del();
void search();
void display();
int main()
{
	int ch,a;
	while(1)
	{
		printf("\nstack menu\n1.insert at beginning\n2.delete \n3.search for an element\n4.display\n5.exit\nenter your choice\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: insBeg();
					break;
			case 2: del();
					break;
			case 3: search();
					break;
			case 4: display();
					break;
			case 5: printf("\n thank you");
					exit(0);
			default: printf("\n enter valid choice");
		}
	}
}
void insBeg()
{
	int x;
	printf("\n enter element");
	scanf("%d",&x);
	if(top==MAX-1)
	{
		printf("\n stack is full");
	}
	else
	{
		top++;
		stack[top]=x;
	}
}
/*void insEnd()
{
	int y;
	printf("\n enter element");
	scanf("%d",&y);	
	if(top2==-1)
	{
		printf("\n stack is full");
	}
	else
	{	
		stack[top2]=y;
		top2--;
	}
}*/
void del()
{
	if(top==-1)
	{
		printf("\n stack is empty")	;
	}
	else
	{
		printf("\n deleted element is %d",stack[top]);
		top--;
	}
}
void search()
{
	printf("\n enter the value to be searched");
	int i,key;
	scanf("%d",&key);
	for(i=0;i<MAX;i++)
	{
		if(stack[i]==key)
		{
			printf("\n element is found at %d position",i+1);
		}
	}
}
void display()
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("%d\t",stack[i]);
	}
}
