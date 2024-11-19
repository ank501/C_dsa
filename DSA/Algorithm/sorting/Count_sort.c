#include<stdio.h>

int main(){
    int arr [8]={9,5,10,3,4,4,2,1};

    // print un-sorted arr ;
    for(int i=0;i<8;i++){
        printf("%d ",arr[i]);
    }
    // finding max element in the arr ;
    int max = arr[0];
    for(int i =0;i<8;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    // create new frequency arr ;
    int freqarr[max+1];
    for(int i =0;i<=max;i++){
        freqarr[i]=0;
    }
    // update the value in freqarr ;
    for(int i=0;i<8;i++){
       freqarr[arr[i]]++;
    }
    // create a cumulative frequency arr ;
    for(int i=1;i<=max;i++){
      freqarr[i]=freqarr[i-1]+freqarr[i];
    }
    // now compare and insert the value in the new output array ;
    int sorted_arr[8];
    for(int i =7;i>=0;i--){
       sorted_arr[freqarr[arr[i]]-1]=arr[i];
       freqarr[arr[i]]--;
    }
    // print sorted arr ;
    printf("\n");
    for(int i=0;i<8;i++){
        printf("%d ",sorted_arr[i]);
    }
    return 0;
}