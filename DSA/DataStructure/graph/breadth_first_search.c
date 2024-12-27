#include<stdio.h>
#define max 20

 int visited[max];
int rear = -1;
int front = -1;
int edges , vertices , start ,end ;
int queue[max];

void enqueu(int data ){
    if(rear==max-1){
        printf("\n queue is full");
    }
    else if(front==-1){
          front =0;   
    }
     rear++;
     queue[rear]=data;
    
}

void Deque()
{
   if(front==-1){
    printf("\n Queue is Empty\n");
   } else{
          printf("%d ",queue[front]);
          front++;
   }
}

int peek (){
    if(front==-1)
    return -1;
 return queue[front];
}


int check_visit(int vertice){
    if(visited[vertice]==1){
        return 0;
    }
    return 1;
}

int main (){
    int start_vertex , y ;
    printf("Enter number of vertices ");
    scanf("%d",&vertices);
    int adj_mat[vertices][vertices];
   
 
//                                      Initializing the matrix with all element zero ; 
    for(int i =0 ;i<vertices;i++){
       for(int j =0;j<vertices;j++){
        adj_mat[i][j]=0;
       }
    }

    printf("Enter number of edges ");
    scanf("%d",&edges);
//                                     setting the value one on all the adjacent element ;
    for(int i=1;i<=edges;i++){
        printf("Enter start and end vertice");
        scanf("%d %d",&start ,&end);
        adj_mat[start][end]=1;
        adj_mat[end][start]=1;
    }
//                                      Printing the matrix ;                         
    for(int i =0 ;i<vertices;i++){
       for(int j =0;j<vertices;j++){
         printf("%d ",adj_mat[i][j]);
       }
       printf("\n");
    }
//                                     enter start vertex ;
 printf("\n Enter the start vertex for BFS");
 scanf("%d", &start_vertex);

 enqueu(start_vertex);
 visited[start_vertex]=1;
 while(1){
    y=peek();
    // printf("peek value : %d ",y);
    for(int k=0;k<vertices;k++){
        if(adj_mat[y][k]==1 && check_visit(k)==1){
            enqueu(k);
            visited[k]=1;
        }
    }
    Deque();
    if(front==rear+1){
        break;
    }
 }

    return 0;
}
