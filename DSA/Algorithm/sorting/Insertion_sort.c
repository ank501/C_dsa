#include <stdio.h>

int arr[]={8,5,3,6,1};

int main(){
    for(int i=0;i<5;i++){
        int temp =arr[i];
        int j = i-1;
        
        while(j>=0 && arr[j]>temp){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(int i=0;i<5;i++){
        printf("%d",arr[i]);
    }
    printf("hello world");

    return 0;
}
