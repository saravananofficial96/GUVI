#include <stdio.h>
struct tree
{
    struct tree *left,*right;
    int key;
};
struct tree * node(int key)
{
    struct tree *newnode=(struct tree *) malloc(sizeof(struct tree));
    newnode->key=key;
    
   newnode->left=NULL;newnode->right=NULL;
   return newnode;
}
struct tree * lca(struct tree * root, int n1, int n2)
{
    if (root == NULL) return NULL;
 
 
    if (root->key > n1 && root->key > n2)
        return lca(root->left, n1, n2);
 
  
    if (root->key < n1 && root->key < n2)
        return lca(root->right, n1, n2);
 
    return root;
}
 
int main()
{ int n1,n2;

   struct tree *root        = node(20);
    root->left               =node(8);
    root->right              = node(22);
    root->left->left         = node(4);
    root->left->right        = node(12);
    root->left->right->left  =node(10);
    root->left->right->right = node(14);
     scanf("%d %d",&n1,&n2);
     
     printf("%d",lca(root,n1,n2)->key);
    return 0;
}
