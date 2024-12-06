#include<stdio.h>
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
     insert(12);insert(9);insert(21);insert(7);insert(5);insert(3);
      insert(11);insert(10);insert(20);insert(6);insert(4);insert(2);
               printf("\n Inorder :");
               inorder(root);
               printf("\n Preorder : ");
               preorder(root);
               printf("\n Postorder : ");
               postorder(root);
     printf("\n\n");
    for(int i=0;i<size;i++){
        printf("%d ",tree[i]);
    } 
    return 0;
}
