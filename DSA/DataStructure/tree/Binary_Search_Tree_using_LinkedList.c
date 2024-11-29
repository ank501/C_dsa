#include <stdio.h>
#include<stdlib.h>

struct Node {
 int data ;
 struct Node *left;
 struct Node *right;
};

struct Node *root = NULL;

struct Node *createNode(int data)
{   
    struct Node *newNode = (struct Node *)malloc(sizeof (struct Node));

    if (!newNode) {
        printf("Memory allocation failed\n");
        return NULL;
    }

    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode;
};

void insert(int data){
    struct Node *newNode = createNode(data);
    if(root == NULL){
          root = newNode;
    }
    else{
      struct Node * temp = root;
      struct Node *parent = NULL;
      while(temp !=NULL){
          parent=temp;
          if(newNode->data <temp->data){
            temp=temp->left;
          }
          else{
            temp=temp->right;
          }
      }
      if(newNode->data<parent->data){
        parent->left=newNode;
      }else{
        parent->right=newNode;
      }
    }

}

void inOrder(struct Node * temp){
    // int data;
   if(temp!=NULL){
    inOrder(temp->left);
    printf("%d ",temp->data);
    inOrder(temp->right);
   }
}
void preOrder(struct Node * temp){
    if(temp!=NULL){
        printf("%d ",temp->data);
        preOrder(temp->left);
        preOrder(temp->right);
    }
}
void postOrder(struct Node * temp){
    if(temp!=NULL){
        preOrder(temp->left);
        preOrder(temp->right);
        printf("%d ",temp->data);
    }
}

int main(){
   int choice ,data;
   while (1)
   {
    printf("\n Select option to perform operation \n\n 1.Insert data \n 2. Traverse (InOrder)\n 3.Traverse(PreOrder)\n 4.Traverse(PostOrder)\n 5.Traversal (In all order) \n 6.for exit \n \n");
    printf("\n Enter Your choice");
    scanf("%d",&choice);
 
    switch (choice)
    {
    case 1: printf("Enter data \n ");
            scanf("%d",&data);
            insert(data);
            break;
    case 2: printf("\n In Order Traversal : ");
            inOrder(root);
            break;
    case 3: printf("\n Pre Order Traversal : ");
            preOrder(root);
            break;
    case 4: printf("\n Post Order Traversal : ");
            postOrder(root);
            break;
    case 5: printf("\n In Order Traversal : ");
            inOrder(root); 
            printf("\n");
            printf("\n Pre Order Traversal : ");
            preOrder(root);  
            printf("\n");
            printf("\n Post Order Traversal : ");
            postOrder(root); 
            printf("\n");
            break;
    case 6: printf("Exiting program.\n");
            exit(0); // Exit the program
    
    default: printf("Invalid option. Please try again.\n");
  
    }
   }
   
}