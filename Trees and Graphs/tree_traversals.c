//Author : Somaiah Thimmaiah Balekuttira
//Date : 29/oct/2017 2:56 pm 
//Insertion and deletion

#include <stdio.h>
#include <stdlib.h>

struct node
{

	int key;
	struct node *left ,*right;

};




struct node *new_node(int key)
{
	struct node *temp= (struct node*) malloc(sizeof(struct node));
	temp->key=key;
	temp->left=NULL;
	temp->right=NULL;


return temp;

}

void inorder(struct node *node)
{

if(node==NULL)
	return;
inorder(node->left);
printf("%d ", node->key);
inorder(node->right);

}


void preorder(struct node *node)
{

if(node==NULL)
	return;

printf("%d ",node->key);
preorder(node->left);
preorder(node->right);

}


void postorder(struct node *node)
{

if(node==NULL)
	return;

postorder(node->left);
postorder(node->right);
printf("%d ",node->key);


}


int main()
{

	struct node *root  = new_node(1);
    root->left = new_node(2);
    root->right  = new_node(3);
    root->left->left  = new_node(4);
    root->left->right = new_node(5); 
 
    
    
    printf("\nPreorder traversal of binary tree is \n");
    preorder(root);
 
    printf("\nInorder traversal of binary tree is \n");
    inorder(root);  
 
    printf("\nPostorder traversal of binary tree is \n");
    postorder(root);
 
    
return 0;

}












