//stacks in c.
//stacks in array implementation.
#include<stdio.h>
#define maxsize 100
int arr[maxsize];
int top=-1;									//Global array and a integer top is decleared 
void push(int data)							//Function to insert a data in the top of the array.
{
	if(top==maxsize-1)
	{
		printf("Stack overflow");			//If data exeeds the array size prints stack overflow; 
		return;
	}
	top++;									//increments the top and stores the data in the top of the stack.
	arr[top]=data;
}
void pop()									//Function to delete an data from the top of the stack.
{
	if(top==-1)
	{
		printf("The stack is empty");		//If top equals to -1 then the stack is empty.
		return;
	}
	top--;									//It  simply decrements the top so the last data losses the connectivity of the stack.
}
int top1()									//This function prints the  stack.
{
	printf("The data in the top: %d",arr[top]);
}
print()										//This function prints all the data from the stack. 
{
	int i;
	for(i=0;i<=top;i++)
	{
		printf("stack @ %d:%d\n",i,arr[i]);
	}
}
int main()
{
	push(2);
//	print();
	push(3);
//	print();
	push(10);
//	print();
	pop();
//	print();
	top1();
}
