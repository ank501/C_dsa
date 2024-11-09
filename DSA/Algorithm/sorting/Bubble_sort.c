#include <stdio.h>
#define size 5

int array [size] = {10,6,3,4,2};

int Bubble_sort( int arr[size] ){
  for(int i=0;i<size;i++){
    for(int j=0;j<size-j-1;j++){
      if(arr[j]>arr[j+1]){
          int temp = arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
      }
    }
  }
}

int main(){
    Bubble_sort(array);
    for(int i=0;i<size;i++){
        printf("\n Here is the sorted array elements element at %d index is %d\n",array,array[i]);
    }
    return 0;
}