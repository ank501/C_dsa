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


int main(){
   int choice ,data;
   while (1)
   {
    printf("\n select option \n 1 for enter data \n 2 for traverse \n 3 for exit");
    scanf("%d",&choice);
    switch (choice)
    {
    case 1: printf("Enter data");
            scanf("%d",&data);
            insert(data);
            break;
    case 2: inOrder(root);
            break;
    case 3: printf("Exiting program.\n");
            exit(0); // Exit the program
            break;
    default: printf("Invalid option. Please try again.\n");
  
    }
   }
   
}