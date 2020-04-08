//Circular queue array implementation in c.
//In queue deletion occurs at front insertion occurs at last.
//In circular queue circular array is used.
#include<stdio.h>
#define size 5								//size of the array is defined
int arr[size];	
int front=-1,rear=-1;						//front and rear is initialised with 0.				     
enqueue(int data)							//this function adds the data in the last.
{
	int rear1=rear;							//A duplicate rear is created so even que is oevrflowed rear value can be reassigned.
	rear=(rear+1)%5;						//Rear value is set. 
	if(front==-1)							//for 1st enqueue front is set to 0.
	{
		front=0;
	}
	else if(front==rear)
	{
		printf("\nqueue overflow");			//if front is equal to rear(circular array) queue is overflowed and intial rear value is set to the rear. 	
		rear=rear1;
		return;
	}
	arr[rear]=data;							//In the rear data is assigned.
	printf("\n%d is inserted",data);		
}
dequeue()									//This function deletes the 1st element from the queue. 
{
	if(front==-1)
	{	
		printf("The queue is emmpty");		//If queue is empty it prints so. 
		return;
	}
	front++;								//The front is incremented. 
}	
print()										//this element prints the queue.									
{
	int i;
	if(front==-1)
	{
		printf("Empty queue");				//If empty queue it prints so.
		return;
	}
	for(i=front;i!=rear;i=(i+1)%size)		//Loop for printing the circular queue.
	{
		if(arr[i]==NULL)
		{
			printf("\nEmpty queue");		///if the queue is empty it s returned.
			return;
		}
		printf("\n%d",arr[i]);
	}
	printf("\n%d",arr[i]);							//Prints the last element.
}
top()												//This function prints the front element. 
{
	printf("\nThe front element is:%d",arr[front]);	
}
int main()
{
//	enqueue(120);
//	print();
//	dequeue();
//	enqueue(99);
//	enqueue(700);
//	enqueue(999);
//	enqueue(777);
//	enqueue(899);
//	dequeue();
//	enqueue(1000);
//	print();
}
