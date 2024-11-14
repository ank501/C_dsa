#include <stdio.h>

void merge(arr, start,end,mid){
  int left_arr_size = mid-start;
  int right_arr_size = end-mid;

  int left_arr[left_arr_size] ;
  int right_arr[right_arr_size];
  
  int i;
  int j;
  for(i=0;i<left_arr_size;i++){
      left_arr[i]=arr[start+i];
  }
  for(j=0;j<right_arr_size;j++){
    right_arr[j]=arr[mid+i+1];
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
 return 0;
}