#include <stdio.h>
#include <stdlib.h>


//Level order C program and a few other programs

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

/*Function protoypes*/
void printGivenLevel(struct node* root, int level);
int height(struct node* node);

/* Compute the "height" of a tree -- the number of
    nodes along the longest path from the root node
    down to the farthest leaf node.*/
int height(struct node* node)
{
   if (node==NULL)
       return 0;
   else
   {
     /* compute the height of each subtree */
     int lheight = height(node->left);
     int rheight = height(node->right);

     /* use the larger one */
     if (lheight > rheight)
         return(lheight+1);
     else return(rheight+1);
   }
}

#define TRUE 1
#define FALSE 0

int equals(struct node * tree1, struct node * tree2)
{
	if(tree1 == NULL && tree2== NULL)
	return TRUE;

	if(tree1 == NULL)
	return FALSE;

	if(tree2 == NULL)
	return FALSE;

	if(tree1->data == tree2->data)
	{
		if(equals(tree1->left, tree2->left) &&
		   equals(tree1->right, tree2->right))
		   {
		   	return TRUE;
		   }

	}


}

int search(struct node * tree, int key)
{

if (tree == NULL)
{
	printf(" Key NOT found !");
	return FALSE;
}

if(tree->data < key)
{
	printf("%d--->", tree->data);
	search(tree->right, key);
}
else if(tree->data > key)
{
	printf("%d--->", tree->data);
	search(tree->left, key);
}
else
{
	printf("%d Key found !", key);
	return TRUE;
}
//printf(" Key NOT found !!");
//return 1;
}
struct node* add_node(struct node *root, int data)
{

if(root ==NULL)
{
root= malloc(sizeof(struct node));
if(root == NULL)
return NULL;
root->data = data;
root->left=NULL;
root->right=NULL;
return root;
}
else
{
	if(root->data < data)
	root->right = add_node(root->right, data);
	else if(root->data > data)
	root->left = add_node(root->left, data);
	else
	printf("why are you trying to insert duplicate data : %d ? \n", data);


}
return root;
}

void print_tree(struct node* root)
{

if(root ==NULL)
{
return ;
}

printf("%d\t", root->data);
print_tree(root->left);
print_tree(root->right);

}

/* Function to print level order traversal a tree*/
void printLevelOrder(struct node* root)
{
  int h = height(root);
  int i;
  for(i=1; i<=h; i++)
  {
  	 printGivenLevel(root, i);
  	 printf("\n");
  }

}

/* Print nodes at a given level */
void printGivenLevel(struct node* root, int level)
{
  if(root == NULL)
    return;
  if(level == 1)
    printf("%d ", root->data);
  else if (level > 1)
  {
    printGivenLevel(root->left, level-1);
    printGivenLevel(root->right, level-1);
  }
}

int main()
{
  struct node *root = NULL ;

root = malloc(sizeof(struct node));
root->data= 23;
root->left=NULL;
root->right = NULL;

	add_node(root, 1);
  add_node(root, 1);
  add_node(root, 2);
  add_node(root, 30);
  add_node(root, 94);
  add_node(root, 5);
  add_node(root, 233);
	add_node(root, -1);

struct node * root2 =NULL;
  root2 = malloc(sizeof(struct node));
root2->data= 23;
root2->left=NULL;
root2->right = NULL;
add_node(root2, 1);
  add_node(root2, 1);
  add_node(root2, 2);

  printf("\n\n");
  print_tree(root);
   printf("\n\n");
 printLevelOrder(root);

 printf("equls %d\n", equals(root, root));
 printf("equls %d\n", equals(NULL, root));
 printf("equls %d\n", equals(NULL, NULL));
printf("equls %d\n", equals(root, root2));
 // printf("Level Order traversal of binary tree is \n");
  //printLevelOrder(root);
  
  printf("search : %d \n", search(root, 94));
  printf("search : %d \n ", search(root, 233));
  printf("search : %d \n", search(root, -1));
   printf("search : %d \n", search(root, 0));

  getchar();
  return 0;
}