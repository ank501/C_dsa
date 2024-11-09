#include <stdio.h>
#define size 5

int array [size] = {10,6,3,4,2};

int Bubble_sort( int arr[size] ){
 // outer loop for iterating over whole array for repeating task of comparesion ;
  for(int i=0;i<size;i++){
// inner loop for iterating over the larray and compare adjacent element for checking and swapping the large element amongst two adjacent element;
    for(int j=0;j<=size+1-j;j++){
// swapping performed ;
      if(arr[j]>arr[j+1]){
          int temp = arr[j];
          arr[j]=arr[j+1];
          arr[j+1]=temp;
      }
    }
  }
}

int main(){
    // sort function is invoked passing an unsorted array as a argument;
    Bubble_sort(array);
    // loop for printing the sorted elements of the array;
    for(int i=0;i<size;i++){
        printf("\n Here is the sorted array elements element at %d index is %d\n",i,array[i]);
    }
    return 0;
}

// Algorithm;
// 1. compare the adjacent elements and swap them if first element is larger than the second element in case of sorting in ascending order.
// 2. repeat this task for each and every element .
// 3. at the end you will got final sorted array .
// 4. in each step you will get last element sorted .