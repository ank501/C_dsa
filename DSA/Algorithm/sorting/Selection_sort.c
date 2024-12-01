#include <stdio.h>
int arr[]={8,5,3,6,1};
//--------------------------------------**  Selection sort on the base of index **----------------------------;
int selection_sort_1(){
    for(int i=0;i<5;i++){
      for(int j =i+1 ;j<5;j++){
        if(arr[i]>arr[j]){
          int temp = arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
      }
    }
}
// ----------------------------------------** Selection sort on the basis of value **---------------------------;
int selection_sort_2(){
    int i,min_value,min_index;
   for(i=0;i<5;i++){
     min_value = arr[i];
     min_index = i;
     for (int j = i+1; j<5; j++)
   {
     if(arr[j]<min_value){
       min_value=arr[j];
       min_index=j;
     }
   }
        int temp = arr[i];
        arr[i] = arr[min_index];
        arr[min_index]=temp;
   }
}
// ---------------------------------------** main function **--------------------------------------------------- ;
int main (){
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
    selection_sort_2(arr);
    for(int i=0;i<5;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}
// Algorithm
