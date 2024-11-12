// 10) Write a choice based program to perform following operations on QUEUE 
// a) Enqueue 
// b) Dequeue

#include <stdio.h>
#include<stdlib.h>
#define size 5

int queue[size];
int flag=0;
int front=-1;
int rear=-1;

// Enque Function 
void Enqueu(int data)
{
    if(rear == size-1){
        printf("\n Queue is Full");
        flag=1;
    }else{  
            if(front==-1){
            front=0;
            }
            rear++;
            queue[rear]=data;
    }
}
// Deque Function
void Deque()
{
   if(front==-1){
    printf("\n Queue is Empty\n");
   } else{
          front++;
   }
}

int main(){

   int data;
   int option =0;
//    loop for giving repeated menu options to user .
   while(option<4){
      printf("\n Select the option from the menu \n 1.Enqueue \n 2.Dequeue \n 3.Traverse \n 4.Exit \n Enter Option Number \n");
      scanf("%d",&option);
//    optins cases using switch case .
   switch (option){
//    case 1 for enque taking data value from the user 
   case 1 : printf("\n Enter the data \n");
            scanf("%d",&data);
            if(flag==0){ Enqueu(data);}
            else{printf("\n cannot add data queue is full\n");}
   break;
//    case 2 dequeue option
   case 2 :  printf("\n option two is selected dequeu is performed\n");
             Deque();
   break;
//    case 3 traversal over the queue and printing value of elements 
   case 3 : if(front!=-1 && rear!=-1){
              for(int i=front ;i<=rear ;i++ ){
             printf("%d",queue[i]);}
            }else{printf("\n Queue is empty cannot traverse over it \n");}           
    break;
//    case 4 inbuilt exit function
    case 4 : exit(0);
//     default case , reseting the option value to 0 for repeating the menu loop
    default: printf("\n select valid option from the menu\n");
             option=0;
   }
   }
    return 0;
}