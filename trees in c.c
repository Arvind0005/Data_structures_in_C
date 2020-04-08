//Trees data structure in c.
//Trees can be accessed through different ways not like linked lists or array they are linear way accessed.
//Usually smaller or equal data than the root data is stored in the left and larger datas are in right. 
#include<stdio.h>
struct node{									//A node of a tree is created with an int data and pointers of left and right nodes.
	int data;
	struct node *left;
	struct node *right;
};

struct node* createnode(int data)
{
	struct node *newnode;
	newnode=malloc(sizeof(struct node));
	(*newnode).data=data;
	(*newnode).left=NULL;
	(*newnode).right=NULL;
	return newnode;
}
struct node *insert(struct node *root,int data)					//It is the function which links the new created node to the already created node.  	
{
	if(root==NULL)
	{
		root=createnode(data);									//If root pointer is null it creates a new node and assigns its address to the root.
		return root;
	}
	if(data<=(*root).data)
	{
		(*root).left=insert((*root).left,data);					//If the data is smaller than or equal the root data it is stored in the left branch of the tree. 
		return root;
	}
	else if(data>(*root).data)
	{
		(*root).right=insert((*root).right,data);				//If the data is larger than the root data it is stored in the right branch.
		return root;
	}
}
struct node* preorder(struct node *root)
{
	printf("%d\n",(*root).data);						//This function prints from root -> left subracnches in left branch -> right subbranches in left branch ->left subbranches in right branch ->right subranches in right branch.
	if((*root).left!=NULL)
	{
		preorder((*root).left);
	}
	if((*root).right!=NULL)												
	{
		preorder((*root).right);
	}
}
struct node* inorder(struct node* root)					//This function prints the tree in tyhe sorted manner. 
{
    if(root == NULL)									
		return;
    inorder(root->left);
    printf("%d \n", root->data);
    inorder(root->right);
}
struct node* postorder(struct node* root)			//it first prints the left branches from the leaf nodes -> right branches from the leaf node -> finlly printf the root. 
{																
    if(root == NULL)
	{
		return;
	}
    postorder(root->left);
    postorder(root->right);
    printf("%d\n", root->data);
}
int main()											//Main function.			
{																
	struct node *root=NULL;
	root=insert(root,5);
	insert(root,3);
	insert(root,8);
	insert(root,9);
	insert(root,7);
	insert(root,10);
	insert(root,2);
	insert(root,4);
   //inorder(root);
   //preorder(root);
   //postorder(root);
}
