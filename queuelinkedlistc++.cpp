#include<bits/stdc++.h>
using namespace std;
class Node
{
	public:
		int data;
		Node* next;
		Node(int newdata)
		{
			this->data=newdata;
			this->next = NULL;
		}
		Node()
		{
			this->data=0;
			this->next=NULL;
		}
};
class Queue
{
	public:
		Node* front;
		Queue()
		{
			front=NULL;
		}
		int enqueue(int data);
		int dequeue();
		int print();
};
int Queue::enqueue(int newdata)
{
	Node* newnode = new Node(newdata);
	if(front==NULL)
	{
		front = newnode;
		newnode->next=NULL;
	}
	else
	{
		Node* temp = front;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		newnode->next=NULL;
	}
	return 0;

}
int Queue::dequeue()
{
	if(front==NULL)
	{
		cout<<"queue is empty";
		return 0;
	}
	else
	{
		front=front->next;
		
	}
	return 0;
}
int Queue::print()
{
	Node* temp = front;
	while(temp!=NULL)
	{
		cout<<"data "<<temp->data<<"\n";
		temp=temp->next;
	}
	return 0;
}
int main()
{
	Queue queue =  Queue();
	queue.enqueue(1);
	queue.enqueue(2);
	queue.enqueue(3);
	queue.dequeue();
	queue.print();
}
