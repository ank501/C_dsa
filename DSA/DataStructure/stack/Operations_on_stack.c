// 1) Write a choice based program to perform following operations on STACK 
// a) PUSH 
// b) POP 
// c)PEEK   
// d) Display

#include <stdio.h>
#include<stdlib.h>
#define size 6
int tos = -1;
int Stack[size] ;


// Push funtion 
int Push(int data){
    if(tos==size-1){
      printf("\n Stack overflow");
    }
    else{
        tos++;
        Stack[tos]=data;
    }
}
// Pop function
int Pop(){
 if(tos==-1){
    printf("\n stack underflow");
 }
 else{
    tos--;
 }
}
// Peek function
int Peek(){
  printf("\n Element at peak is %d",Stack[tos]);
}
// display function , for showing elements of the array.
int Display(){
   for(int i=0;i<=tos;i++){
    printf("%d, ",Stack[i]);
   }
}
// Main function 
int main(){
    int option = 0,data;
  
    while(option<5){

    printf("\n\n Select the option from the menu \n 1. Push  \n 2. Pop \n 3. Peek \n 4. Display \n 5. Exit \n Enter the option number\n option :-  ");
    scanf("%d",&option);

    switch (option)
    {
    case 1 : printf("\n Enter the data of array\n");
             scanf("%d",data);
             Push(data);
        break;
     case 2 :Pop();
             printf("\n Pop operation performed\n");
        break;
     case 3 :Peek();
        break;
     case 4 : printf("\n Below is the elements of stack\n");
             Display();
        break;
     case 5 : exit(0);
        break;
    
    default:
        break;
    }
    }
  return 0;
}