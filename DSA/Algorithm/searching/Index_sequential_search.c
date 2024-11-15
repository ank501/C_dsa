#include <stdio.h>

int main(){
    int arr [] = {10,82,543,4,17,3,79,33,18,42,7,3,7,90,43,45,245,24,64,13,67,22,535,6554,342} ;
    int ele_in_group;
    printf("\n Enter number of element of group \n");
    scanf("%d",&ele_in_group);
    
    int ind_arr_size =25/ele_in_group;
    int index_arr[ind_arr_size];
    int index=0;;

    for(int i=0;i<25;i+=ele_in_group){
       index_arr[index++]=i;
    }

    int x;
    printf("\n Enter the element to search \n");
    scanf("%d",x);

    int start ;
    int end ;
   

    for(int i=0;i<ind_arr_size;i++){
        if(x>=arr[index_arr[i]]&&x<=arr[index_arr[i+1]]){
            start=index_arr[i];
            end=index_arr[i+1];
             printf("\n hello world 2");
        }
    }
  
     for(int i=start;i<end;i++){
        if(x==arr[i]){
            printf("\n %d Element is present in the array at %d th index",x,i);
            break;
        }
     }
        for(int i =0;i<7;i++){
        printf("%d ",index_arr[i]);
    }
    return 0;
}