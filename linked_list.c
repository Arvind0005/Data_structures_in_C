//Lingle linked list in c.
//Linked lists are datas at differebnt memory location(nodes),each node has its data and the address of the next node.
//The first element address is stored in head and in the last node the address of the next element is NULL;
//Linked list enables the user to dynamically add or remove any elements in the list.   
#include<stdio.h>
#include<stdlib.h>
int insert_at_the_front();						
int insert_at_the_middle();					
int insert_at_the_end();				//User defined functions. 
int delete_the_front();
int delete_the_end();
int delete_the_middle();
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
	two = malloc(sizeof(struct node));				//Memory is assigned and their staring address is stored in the nodes. 
	three = malloc(sizeof(struct node));				
	
	(*one).data=3;
	(*two).data=4;									//Data is assigned to the three nodes.
	(*three).data=5;
	
	head=one;
	(*one).next=two;								//connecting the node's address and head is stored with the 1st node's address.
	(*two).next=three;
	(*three).next=NULL;
	
	print(head);									//print function is called with the head as the arguement.
	head=insert_at_the_front(head,8);				//insert at the front function is called with the head and the inserting value as the arguement.
	print(head);	
	insert_at_the_end(head,9);						//insert at the end function is called with the heda and the inserting value as arguement.
	print(head);
	insert_at_the_middle(3,head,0);					//insert at the middle function is called with the position,head and the inserting value as the arguement.	
	print(head);
	delete_the_middle(3,head);
	print(head);
	head=delete_the_front(head);					//delete the front function is called with the head as the arguement.	
	print(head);
	delete_the_end(head);							//delete the end function is called with the head as the arguement.
	print(head);
}
int insert_at_the_front(struct node *head,int x)		//head and the inserting integer is got from the main()
{
	struct node *new=NULL;								//new node is created.
	
	new = malloc(sizeof(struct node));					//memory is allocated to the new node.
	
	(*new).data=x;										//data is given to the new node.
	(*new).next=head;									//the head(1st node address) is stored in the new node.
	head=new;											//the new node's address is stored in the head.
	return head;										//the list is printed by calling the print()
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
int insert_at_the_end(struct node *head, int x)		//the head and the integer to be inserted got as the argument 
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
int delete_the_front(struct node *head)				//head is got from the calling function.
{
	head=(*head).next;									//the head is equal to the next element's(2nd node's) address
	return head;										//the head is returned. 
}
int delete_the_end(struct node *head)					//head is got from the calling function.
{
	struct node *temp=head;								//new node temp is created and stored with the head values.
	while((*(*temp).next).next !=NULL)					//the loop runs till the before node of the last element.
	{
		temp=(*temp).next;								//the temp is set to the next node address.								
	}
	(*temp).next=NULL;									//the last before elemment is set to null and there by connectivity to last node is lost and hence it is deleted.

}
int insert_at_the_middle(int position,struct node *head,int value) //the position to be inserted,head, and the inserting value is got.
{
	struct node *newNode=NULL;							//new node is created.
	struct node *temp;									//another node temp is created.
	temp=head;											//temp is equals to the head(1st node's address).
	newNode=malloc(sizeof(struct node));
	
	(*newNode).data=value;								//data for the new node is set.
	
	int i;												//loop variable is is created.
	
	for(i=2;i<position;i++)								//loop till the position comes.
	{													//i=2 coz when i=2 in that loop temp stores the 2nd nodes address.
        temp = (*temp).next;							//the temp stores the next node's address.

    }
    (*newNode).next = (*temp).next;						//in the newnode the address of the next to the positioned node is stored.
    (*temp).next = newNode;  							//the node after the new node is given the new node's address.

}
int delete_the_middle(int position,struct node *head)	//the position of the node to be deleted and the head is got.
{
	int i;												//looping integer i is decleared.
	struct node *temp=head;								//a variable temp is declared and equaled to the head(1st address) 
	for(i=2;i<position;i++)								//looping isdone till the position comes.
	{
		if((*temp).next!=NULL)
		{							
			temp=(*temp).next;							//temp is set to the next nodes address.
		}
	}
	(*temp).next=(*(*temp).next).next;					//temp stores the next address of the deletion node thereby deletion node doset have any connection.
}
