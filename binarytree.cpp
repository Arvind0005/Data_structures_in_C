#include<bits/stdc++.h>
using namespace std;
class Node
{
    public:
        int data;
        Node* left;
        Node* right;
        Node(int newdata)
        {
            this->data=newdata;
            this->left=NULL;
            this->right=NULL;
        }
};
class BinaryTree
{
    public:
        Node* insert(Node* root,int data);
};
Node* BinaryTree::insert(Node* root,int data)
{
    Node* newnode = new Node(data);
    if(root==NULL)
    {
        root = newnode;
        root->right =NULL;
        root->left=NULL;
    }
    else if(data>root->data)
    {
        root->right =insert(root->right,data);
    }
    else
    {
        root->left = insert(root->left,data);
    }
}
int main()
{
    Node *root = NULL;
    BinaryTree binarytree = BinaryTree();
    root = binarytree.insert(root,1);
    cout<<"inserted "<<"address "<<root<<" data  "<<root->data;
    root = binarytree.insert(root,2);
	cout<<"\ninserted2 in right "<<"address "<<root<<" data  "<<root->right->data;
	root = binarytree.insert(root,0);
	cout<<"\ninserted0 in left"<<"address "<<root<<" data  "<<root->left->data;
    // Node* root = new Node(0);
    // Node* node1=new Node(1);
    // root->left=node1;
    // Node* node2 = new Node(2);
    // root->right =node2;
    // cout<<"data in root = "<<root->data<<"\n";
    // cout<<"data in right node= "<<root->right->data<<"\n";
    // cout<<"data in left node= "<<root->left->data<<"\n";
    
}
