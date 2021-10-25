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
class LinkedList
{
    public:
        Node* head;
        LinkedList(){
            head=NULL;
        }
        void insertnode(int data);
        void deletenode(int position);
        void displaylist();
};

void LinkedList::insertnode(int data)
    {
        Node* newnode=new Node(data);    
        if(head==NULL)
        {
            head=newnode;
            return;
        }
        
        Node* temp;
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    };
void LinkedList::displaylist()
{
    Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        cout<<"\ndata "<<temp->data;
        temp=temp->next;
    }
}

void LinkedList::deletenode(int position)
{
    int length=0,cposition=1;
    Node* temp;
    temp=head;
    while(temp!=NULL)
    {
        temp=temp->next;
        length++;
    }
    temp=head;
    Node* temp2=NULL;
    while(cposition<=position)
    {
       // cout<<"yes";
        if(cposition==position-1)
        {
            temp2=temp;   
        }
        if(cposition==position)
        {
            temp2->next=temp->next;
            break;
        }
        temp=temp->next;
        cposition++;
    }
    
  //  cout<<"the total length is"<<length;
}
int main() {
    LinkedList linkedList = LinkedList();
    cout<<"Data structure\n";
    linkedList.insertnode(1);
    linkedList.insertnode(2);
    linkedList.insertnode(3);
    linkedList.insertnode(4);
    linkedList.displaylist();
    linkedList.deletenode(3);
    cout<<"\nafter deleting\n";
    linkedList.displaylist();
    // Write C++ code here
  //  std:cout << "Hello world!";

    return 0;
}
