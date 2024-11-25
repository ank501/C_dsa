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
   
}




int main(){

}