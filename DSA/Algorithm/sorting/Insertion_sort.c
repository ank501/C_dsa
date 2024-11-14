#include <stdio.h>

int arr[]={8,5,3,6,8};

int main(){
    for(int i=1;i<5;i++){
        int temp =arr[i];
        int j = i-1;
        
        while(j>=0 && arr[j]>temp){
            arr[i+1]=arr[j];
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
