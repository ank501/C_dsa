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
    //    printf("\n hello world");
    }
    for(int i =0;i<7;i++){
        printf("%d ",index_arr[i]);
    }
    printf("\n hello world");
    return 0;
}