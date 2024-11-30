#include <stdio.h>

 int arr [24] = {10,82,543,4,17,3,79,33,18,42,7,3,7,90,43,45,245,24,64,13,67,22,535,342} ;

// /Function for merge ;
void merge(int arr[], int start, int end, int mid){
 
//  Calculating size of new arrays ;
  int left_arr_size = mid-start+1;
  int right_arr_size = end-mid;
// creation of two new arrays ;
  int left_arr[left_arr_size] ;
  int right_arr[right_arr_size];
  
// Loop for inserting the values in new arrays ;
  for(int i=0;i<left_arr_size;i++){
      left_arr[i]=arr[start+i];
  }
  for(int j=0;j<right_arr_size;j++){
    right_arr[j]=arr[mid+j+1];
  }
  // Loop for merging the arrays ;
    int i=0 , j=0,k=start;

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
  
    // Copy any remaining elements from left_arr , this will only occur when array size will be odd;
    while (i < left_arr_size) {
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    // Copy any remaining elements from right_arr ,this will only occur when array size will be odd ;
    while (j < right_arr_size) {
        arr[k] = right_arr[j];
        j++;
        k++;
    }
}
 
//  Divide function , its tree recursive function ; 
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

// Algorithm ;
/*
1. It works on the principle of divide and conquere .
2. Divide function will Divide the original , using start end and mid , mid is calculated as start+end/2;
3. Divide the array recursively , .
4. Merge Function will and create left array and right array ,left array loop will be from start to mid , and for right array it will be mid+1 to end.
5. size of left array will be mid-start+1 and for right array end-mid;
6. insert the values in the left and right array .
7. now compare the first element of array and merge them .





 */
