#include <stdio.h>

int arr[]={8,5,3,6,1};

int main(){
    for(int i=0;i<5;i++){
        int temp =arr[i];  // storing array value in temp variable .
        int j = i-1;        // j pointer is initialise with i-1;
    
// ---------------------** loop for comparision and swapping **---------------

        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];   // if temp value is less than current element swap
            j--;               // decrease the j pointer 
        }
        arr[j+1]=temp;         // store temp value in the previous index of array.
        //    printf("%d \n",arr[j+1]);
    }
//  ----------------------** print the sorted array  **------------------------ 
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }

    return 0;
}
