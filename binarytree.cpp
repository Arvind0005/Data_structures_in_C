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
        void print(Node* root);
        bool search(Node* root , int data);
        int find_min(Node* root);
};


int BinaryTree::find_min(Node* root)
{
    if(root==NULL)
    {
        return 0;
    }
    else if(root->left==NULL)
    {
        cout<<root->data<<"is the smallest";
    }
    else
    {
        find_min(root->left);
    }
}


bool BinaryTree::search(Node* root,int data)
{
    if(root==NULL)
    {
        return false;
    }
    else if(root->data==data)
    {
        cout<<"found the number";
    }
    else if(data<root->data)
    {
        search(root->left,data);
    }
    else if(data>root->data)
    {
        search(root->right,data);
    }
}
void BinaryTree::print(Node* root)
{
    if(root==NULL)
    {
       // cout<<"number not found";
        return ;
    }
    cout<<root->data<<"\n";
    print(root->left);
    print(root->right);
}
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
    return root;
}

int main()
{
    Node *root = NULL;
    bool search_result;
    BinaryTree binarytree = BinaryTree();
    root = binarytree.insert(root,1);
    cout<<"inserted "<<"address "<<root<<" data  "<<root->data;
    root = binarytree.insert(root,3);
	cout<<"\ninserted2 in right "<<"address "<<root<<" data";
	root = binarytree.insert(root,2);
	cout<<"\ninserted0 in left"<<"address "<<root<<" data  "<<"\n";
	binarytree.print(root);
	cout<<"\n";
	search_result = binarytree.search(root,2);
	if(!search_result)
	{
	    cout<<"number not found";
	}
	binarytree.find_min(root);
//	cout<<"came";
    // Node* root = new Node(0);
    // Node* node1=new Node(1);
    // root->left=node1;
    // Node* node2 = new Node(2);
    // root->right =node2;
    // cout<<"data in root = "<<root->data<<"\n";
    // cout<<"data in right node= "<<root->right->data<<"\n";
    // cout<<"data in left node= "<<root->left->data<<"\n";
    
}
