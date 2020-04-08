//Lingle linked list in c.
//Linked lists are datas at differebnt memory location(nodes),each node has its data and the address of the next node.
//The first element address is stored in head and in the last node the address of the next element is NULL;
//Linked list enables the user to dynamically add or remove any elements in the list.   
#include<stdio.h>
#include<stdlib.h>					
int enqueue();				//User defined functions. 
int dequeue();
void print();
struct node{
	int data;
	struct node *next;					//A structure(node) is created with an integer data to store the data and an pointer next to store the next node's address.
};
struct node *head;
int main()
{
	struct node *one = NULL;
	struct node *two = NULL;			//Three structure pointers are created and head is created to store the 1st node's address.
	struct node *three = NULL;
	
	one = (struct node*)malloc(sizeof(struct node));
	two = malloc(sizeof(struct node));					//Memory is assigned and their staring address is stored in the nodes. 
	three = malloc(sizeof(struct node));				
	
	(*one).data=3;
	(*two).data=4;										//Data is assigned to the three nodes.
	(*three).data=5;
	
	head=one;
	(*one).next=two;									//connecting the node's address and head is stored with the 1st node's address.
	(*two).next=three;
	(*three).next=NULL;
	
	print(head);										//print function is called with the head as the arguement.
	enqueue(head,9);									//enqueue function is called with the heda and the inserting value as arguement.
	print(head);
	head=dequeue(head);									//dequeue the front function is called with the head as the arguement.	
	print(head);
	top(head);
}
void print(struct node *head)							//the function print got the head pointer from the calling function.
{
	struct node *temp=head;								//a new structure variable temp is stored with the head address.
	while(temp!=NULL)									//the loop will run till the temp becomes NULL(till last node)
	{
		printf("%d  ",(*temp).data);					//printing the data in that particular address.
		temp=(*temp).next;								//the next node's address  is stored in the temp. 
	}
	printf("\n");
}
int enqueue(struct node *head, int x)					//the head and the integer to be inserted got as the argument 
{			
	struct node *new=NULL;								//a new node is created.

	new=malloc(sizeof(struct node));					// memory is allocated to the new node.
	
	(*new).data=x;										// data is given to the new node.
	
	struct node *temp = head;							//tem is created and head(1st nodes address) is stored in it. 
	printf("\n");						
	while((*temp).next!=NULL)							//the loop runs till the last element.
	{
		temp=(*temp).next;								//the temp is stored with the next node's address.  
	}	
	(*temp).next=new;									//the last element next value is stored as the address os the new node created.
	(*new).next=NULL;									//the next of the new node is specifed to null since it is the last node.
}
int dequeue(struct node *head)							//head is got from the calling function.
{
	head=(*head).next;									//the head is equal to the next element's(2nd node's) address
	return head;										//the head is returned. 
}
void top(struct node *head)
{
	printf("%d",(*head).data);
}
