#include <stdio.h>
#define max 20
int arr[max];
int visited[max];
int top=-1;
int vertices,edges, start_edge,end_edge ,start_vertex ,y;
int stack[max];

void push(int data){
  if(top==max-1){
  printf("\n Stack overflow");
  }
  top++;
  stack[top]=data;
  printf("%d ",stack[top]);
}

void pop(){
    if(top==-1){
        printf("\n stack underflow");
    }
    top--;
}

int peek(){
    if(top==-1){
        return -1;
    }
    return stack[top];
}

int check_visit(int vertex){
  if(visited[vertex]==1){
    return 0;
  }
  return 1;
}

int main(){
    printf("\n Enter number of Vertices in the graph \n");
    scanf("%d",&vertices);
      printf("\n Enter number of Edges in the graph \n");
    scanf("%d",&edges);
    int adj_mat[vertices][vertices];
    
    // create adj_mat initiate all element value 0;

    for(int i=0;i<vertices;i++){
       for(int j=0;j<vertices;j++){
        adj_mat[i][j]=0;
       }
    }
    
    
    printf("\n Enter number of start edge and end edge\n");
    for(int i=1;i<=edges;i++){
         scanf("%d %d",&start_edge,&end_edge);
         adj_mat[start_edge][end_edge]=1;
        adj_mat[end_edge][start_edge]=1;
    }

    
 

    // print adjcent matrix 

    printf("\n Adjacency matrix : = \n");
    for(int i=0;i<vertices;i++){
       for(int j=0;j<vertices;j++){

        printf("%d ",  adj_mat[i][j]);
       }
       printf("\n");
    }
    

    printf("\n Enter the start vertex ");
    scanf("%d",&start_vertex);
    
    push(start_vertex);
    visited[start_vertex]=1;
    
    while(1){
        for(int i=0;i<vertices;i++){
            y=peek();
            if(adj_mat[y][i]==1 && check_visit(i)==1){
                push(i);
                visited[i]=1;
                i=0;
            }
        }
        pop();
        if(top==-1){
            break;
        }
    }

    return 0;
}