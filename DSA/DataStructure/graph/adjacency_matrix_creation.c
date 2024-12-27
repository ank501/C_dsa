#include<stdio.h>
#define max 10
int adj_mat[max][max];

int edges , vertices , start ,end ;

int main (){
    printf("Enter number of vertices ");
    scanf("%d",&vertices);
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

    return 0;
}