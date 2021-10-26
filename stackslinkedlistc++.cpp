// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node* next;
        Node(int newdata)
        {
            this->data=newdata;
            this->next=NULL;            
        }
        Node()
        {
            this->data=0;
            this->next=NULL;
        }
};
class Stack_linkedlist
{
    public:
        Node* head;
        Stack_linkedlist()
        {
        	head=NULL;
        }
        void push(int newdata);
        void pop();
        void printlist();
};

void Stack_linkedlist::push(int newdata)
{
    Node* newnode = new Node(newdata);
    Node* nextnew;
  //  cout<<"head = "<<newnode<<" next new "<<nextnew<<"\n";
    newnode->next=head;
    head=newnode;

};
void Stack_linkedlist::pop()
{
    if(head==NULL)
    {
        cout<<"no data";
        return;
    }
    head = head->next;
}
void Stack_linkedlist::printlist()
{
	Node* temp;
    temp=head;
    int i=0;
    if(temp==NULL)
    {
    	cout<<"stack overflow";
    	return;
	}
    while(temp!=NULL)
    {
        cout<<" "<<temp->data<<"\n";
        temp=temp->next;
        
    }
}

int main()
{
    Stack_linkedlist stacklist = Stack_linkedlist();
    stacklist.push(1);
    stacklist.push(2);
    stacklist.push(3);
    stacklist.push(4);
    stacklist.pop();
    cout<<"printing list\n";
	stacklist.printlist();
}
