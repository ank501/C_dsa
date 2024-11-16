#include <stdio.h>

 int arr [24] = {10,82,543,4,17,3,79,33,18,42,7,3,7,90,43,45,245,24,64,13,67,22,535,342} ;


void merge(int arr[], int start, int end, int mid){

  int left_arr_size = mid-start+1;
  int right_arr_size = end-mid;

  int left_arr[left_arr_size] ;
  int right_arr[right_arr_size];
  
  int i=0;
  int j=0;
  int k=start;
  for(i=0;i<left_arr_size;i++){
      left_arr[i]=arr[start+i];
  }
  for(j=0;j<right_arr_size;j++){
    right_arr[j]=arr[mid+j+1];
  }
  while(i<left_arr_size && j<right_arr_size){
        if(left_arr[i]<=right_arr[j]){
          arr[k]=left_arr[i];
          i++;
        }
        else{
          arr[k]=right_arr[j];
          j++;
        }
              k++;
  }
  
    // Copy any remaining elements from left_arr
    while (i < left_arr_size) {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    // Copy any remaining elements from right_arr
    while (j < right_arr_size) {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}

void divide(int arr[],int start,int end){
  int mid=(start+end)/2;
  if(start<end){
    divide(arr , start ,mid);
    divide(arr , mid+1 ,end);
    merge(arr, start,end,mid);
  }
}

int main(){
  // Print the original array
    printf("Original array:\n");
    for (int i = 0; i < 24; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Sort the array using divide and merge
    divide(arr, 0, 23);

    // Print the sorted array
    printf("Sorted array:\n");
    for (int i = 0; i < 24; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

 return 0;
}