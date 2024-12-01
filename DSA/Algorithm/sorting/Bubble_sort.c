#include <stdio.h>
#include <time.h>
#define size 25

// int array [size] = {10,6,3,4,2};
    int arr [25] = {10,82,543,4,17,3,79,33,18,42,7,3,7,90,43,45,245,24,64,13,67,22,535,6554,342} ;

void Bubble_sort( int arr[size] ){
 // outer loop for iterating over whole array for repeating task of comparesion ;
  for(int i=0;i<size;i++){
// inner loop for iterating over the larray and compare adjacent element for checking and swapping the large element amongst two adjacent element;
    for(int j=0;j<size-i-1;j++){
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
    Bubble_sort(arr);
    // loop for printing the sorted elements of the array;
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}

// Algorithm;
// 1. compare the adjacent elements and swap them if first element is larger than the second element in case of sorting in ascending order.
// 2. repeat this task for each and every element .
// 3. at the end you will got final sorted array .
// 4. in each step you will get last element sorted .