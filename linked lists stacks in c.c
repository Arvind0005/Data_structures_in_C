//Stacks in c.
//Stacks with linked lists implementation.
//Advantage in linked list than array implementation is no chance of stack overflow.
#include<stdio.h>
struct node{
	int data;									//A node with int data nd pointer to next node is created.
	struct node* link;
};

struct node *top=NULL;							//Global variable top is created.

void push(int data)								//A push function is created with integer as argument.
{
	struct node *newnode;							
	newnode =malloc(sizeof(struct node));		//It creates a newnode and saves the address in it. 
	(*newnode).data=data;						//The data is stored in the newnode. 
	(*newnode).link=top;						//The link to the newnode is set to the top element. 
	top=newnode;								//The top element points the newnode.
}
void pop()										//This function delets the 1st node in the stack.
{
	if(top==NULL)
	{
		printf("The stack is empty");			//If stack is empty it prints the stack is empty.
		return;
	}
	top=(*top).link;							//It sets the 2nd element as the top
}
void print()									//This function prints the stack
{
	struct node *temp=top;						//Pointer temp is created equal to top
	while(temp!=NULL)
	{
		printf("%d\n",(*temp).data);			//It prints the data till the last node.
		temp=(*temp).link;						//The temp is incremented to the nex address. 
	}
}
void main()
{
	push(3);
	push(4);
	print();
	pop();
	print();
}
