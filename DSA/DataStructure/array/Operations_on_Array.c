//  4) Write a  choice based program to perform following operations in Array. 
// 
//   A)  Insert a new element at beginning    
//   B)  Insert a new element at last.   
//   C)  Insert a new element at any position k. 
//   D)  Delete an element from beginning     
//   E)  Delete an element from last.    
//   F)  Delete an element from any position k. 
//   G)  Print Array. 

#include <stdio.h>
#include <stdlib.h>
#define size 6
int arr[size] ;
int data,k;
//   A)  Insert a new element at beginning    
int insert_at_begining(){
             printf("\n Enter the data to insert at begining of an array\n");
             scanf("%d",data);
             arr[0]=data;
}
//   B)  Insert a new element at last.   
int insert_at_end(){
             printf("\n Enter the data to insert at end of an array\n");
             scanf("%d",data);
             arr[0]=data;
}
//   C)  Insert a new element at any position k. 
int insert_at_Kth_position(){
             printf("\n Enter the data to insert at Kth position of an array\n");
             printf("Enter position number \n");
             scanf("%d",k);
             printf("Enter element \n");
             scanf("%d",data);
            //  arr[k]=data;
             for(int i=0;i<size;i++){
                  printf("%d, ",arr[i]);
                 }
}
//   G)  Print Array. 
int Print_arr(){
             for(int i=0;i<size;i++){
                  printf("%d, ",arr[i]);
                 }
}
// Main function ;
int main(){
    int option = 0;
  
    while(option<7){

    printf("\n\n Select the option from the menu \n 1. Insert at begining  \n 2. Insert at end \n 3. Insert at Kth position  \n 4. Delete at begining \n 5. Delete at End \n 6. Delete at Kth position \n 7. Print Array \n 8. Exit \n Enter the option number\n option :-  ");
    scanf("%d",&option);

    switch (option)
    {
    case 1 : insert_at_begining( data);
        break;
     case 2 :insert_at_end(data);
        break;
     case 3 : insert_at_Kth_position(k,data);
        break;
     case 4 : Print_arr();
        break;
    //  case 5 : arr[0]="";
    //     break;
    //  case 6 :arr[size-1]="";
    //     break;
    //  case 7 :printf("\n Enter the Kth position of an array want to delete\n");
    //          scanf("%d",k);
    //          arr[k]="";
    //     break;
     case 8 :exit(0);
        break;
    
    default: printf("\n Select Valid option");
             option=0;
        break;
    }
    }
  return 0;
}