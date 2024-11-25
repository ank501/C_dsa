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




int main(){

}