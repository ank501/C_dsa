#include <stdio.h>

int arr[10] = {2,8,9,3,6,23,56,78,90,1};

int main()
{   
    int x, flag=0;
    printf("\n enter the number for search");
    scanf("%d",&x);
    for(int i=0;i<10;i++){
        if(arr[i]==x){
            printf("%d present in the array at %d index",x,i);
            flag=1;
            break;
        }
    }
    if(flag==0){
        printf("%d is not present in the given array",x);
    }
    return 0;
}