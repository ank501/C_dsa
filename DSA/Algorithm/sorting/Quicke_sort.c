#include <stdio.h>

int partition(int arr[], int low ,int high){
int pivot =arr[high];
int i=low-1;

for(int j=low;j<=high;j++){
    if(arr[j]<pivot){
        i++;
        int temp=arr[i];
        arr[i] =arr[j];
        arr[j] = temp;
    }
}
int temp =arr[i+1];
arr[i+1] = arr[high];
arr[high] = temp;
return (i+1);
}

void qucisort(int arr[] ,int low ,int high){
if(low<high){
    int pi = partition(arr,low,high);
             qucisort(arr,low,pi-1);
             qucisort(arr,pi+1,high);
}
}

int main(){
    int arr[10] = {56,34,3,5,7,8,4,23,12,45};
      qucisort(arr,0,9);
      for(int i=0;i<10;i++){
        printf("%d ",arr[i]);
      }
    return 0;
}