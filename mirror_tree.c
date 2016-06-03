#include <stdio.h>
struct mirror{
	int key;
	struct mirror *left,*right;
  } *root;

mirror *newNode(int key)
{
    mirror *temp = new Node;
    temp->key  = key;
    temp->left  = temp->right = NULL;
    return (temp);
}

void mirror(struct mirror *node )
{
struct mirror *temp1;
	if(node==NULL)
	  return;
	 else
	  {
	  	mirror(root->left);
	  	mirror(root->right);
	  	temp=root-left;
	  	root->left=root->right;
	  	root->right=temp;
	  	return;
	  }
}
int main(void) {
	// your code goes here
	
  struct node *root = newNode(1);
  root->left        = newNode(2);
  root->right       = newNode(3);
  root->left->left  = newNode(4);
  root->left->right = newNode(5); 
   
   return 0;
}
