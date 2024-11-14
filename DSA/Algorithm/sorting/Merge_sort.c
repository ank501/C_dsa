#include <stdio.h>
void merge(){

}

void divide(int arr[],int start,int end){
  int mid=(start+end)/2;
  if(start<end){
    divide(arr , start ,mid);
    divide(arr , mid+1 ,end);
  }
}
int main(){
 return 0;
}