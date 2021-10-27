#include<bits/stdc++.h>
using namespace std;
int enqueue(int data);
bool isEmpty();
bool isFull();
int dequeue();
void print();
int queuex[5]={0,0,0,0,0};
int front = -1;
int rear =-1;
int main()
{
    
    cout<<"\nbefore insertion ";
    print();
    enqueue(9);
    enqueue(8);
    enqueue(7);
    enqueue(6);
    enqueue(5);
    cout<<"\nafter insertion ";
    print();
    dequeue();
    cout<<"\nafter deletion ";
    print();
    // dequeue();
    // cout<<"\nafter deletion ";
}
void print()
{
    int temp = front;
    while(temp<rear)
    {
        cout<<"\n"<<queuex[temp];
        temp++;
    }
}
 bool isEmpty()
    {
        if(front==-1 && rear ==-1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    bool isFull()
    {
        if(front==4)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int enqueue(int data)
    {
       if(isEmpty())
       {
          
           rear=front=0;
       }
       if(isFull())
       {
           
           cout<<"it is full";
           return 0;
       }
       else
       {
           
           queuex[rear]=data;
           rear++;
       }
    }
    int dequeue()
    {
        if(isEmpty())
        {
             cout<<"\nyes";
            cout<<"it is empty";
            return 0;
        }
        else if(rear==front)
        {
            cout<<"\ns";
            rear=front=-1;
        }
        else
        {
            cout<<"\nssss";
            front++;
        }
    }
