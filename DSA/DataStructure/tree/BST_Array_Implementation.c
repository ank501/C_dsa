#include<stdio.h>
#include<stdlib.h>
#define size 40
int tree[size] ;
int root = 0;

void insert (int data ){
    if(tree[root]==-1)
     tree[root]=data;
    else
    {
        int tmp = root;
        while (tmp<size && tree[tmp]!=-1)
        {
            if(data<tree[tmp])
              tmp=tmp*2 +1;
             else
              tmp=tmp*2 +2;
        }
        if(tmp<size)
           tree[tmp]=data;
        else
        printf("\n tree size exceeded");
    }
}
void inorder(int tmp){
    if(tmp<size && tree[tmp]!= -1){
        inorder(2*tmp+1);
        printf("%d ",tree[tmp]);
        inorder(2*tmp+2);
    }
}
void preorder(int tmp){
    if(tmp<size && tree[tmp]!=-1){
        printf("%d ",tree[tmp]);
        preorder(2*tmp+1);
        preorder(2*tmp+2);
    }
}
void postorder(int tmp){
    if(tmp<size && tree[tmp]!=-1){
        postorder(2*tmp+1);
        postorder(2*tmp+2);
        printf("%d ",tree[tmp]);
    }
}
int main (){
    // for(int i=0;i<size;i++){
    //     printf("%d ",tree[i]);
    // }
    for(int i =0;i<size;i++){
        tree[i]=-1;
    }
    // for(int i=0;i<size;i++){
    //     printf("%d ",tree[i]);
    // }
    //  insert(12);insert(9);insert(21);insert(7);insert(5);insert(3);
 
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
            inorder(root);
            break;
    case 3: printf("\n Pre Order Traversal : ");
            preorder(root);
            break;
    case 4: printf("\n Post Order Traversal : ");
            postorder(root);
            break;
    case 5: printf("\n In Order Traversal : ");
            inorder(root); 
            printf("\n");
            printf("\n Pre Order Traversal : ");
            preorder(root);  
            printf("\n");
            printf("\n Post Order Traversal : ");
            postorder(root); 
            printf("\n");
            break;
    case 6: printf("Exiting program.\n");
            exit(0); // Exit the program
    
    default: printf("Invalid option. Please try again.\n");
  
    }
   }
    for(int i=0;i<size;i++){
        printf("%d ",tree[i]);
    } 
    return 0;
}
