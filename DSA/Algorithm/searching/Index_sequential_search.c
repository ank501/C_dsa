#include <stdio.h>
    int arr [25] = {10,82,543,4,17,3,79,33,18,42,7,3,7,90,43,45,245,24,64,13,67,22,535,6554,342} ;
    

void bubble_sort(int arr[]){
    for(int i=0;i<25;i++){
     for(int j=0;j<24;j++){
        if(arr[j]>arr[j+1]){
            int temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
     }
  }
  printf("\n array is sorted");
}




int main(){
    int k;
    int x;
    bubble_sort(arr);
  for(int i=0;i<25;i++){
    printf("%d ",arr[i]);
  }
    printf("\n Enter number of element of group \n");
    scanf("%d",&k);
    
    int ind_arr_size =25/k;
    int index_arr[ind_arr_size];
    int index=0;;

    for(int i=0;i<25;i+=k){
       index_arr[index++]=i;
    }

  
    printf("\n Enter the element to search \n");
    scanf("%d",&x);

    int start ;
    int end ;
   int flag=0;

    for(int i=0;i<ind_arr_size-1;i++){
        if(x>=arr[index_arr[i]]&&x<=arr[index_arr[i+1]-1]){
            start=index_arr[i];
            end=index_arr[i+1];
            flag=1;
            break;
        }
    }
    if(flag==0){
        start=index_arr[ind_arr_size-1];
        end=25;
    }
       int i;
     for( i=start;i<end;i++){
        if(x==arr[i]){
            printf("\n %d Element is present in the array at %d th index",x,i);
            break;
        }
       
     }
      if(i>=end){
         printf("%d does not exist in array",x);

        }
 
    return 0;
}