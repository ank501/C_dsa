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
    if(rear == size-1)
    {
        printf("\n Queue is Full");
        flag=1;
    }
    else 
    {  
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
   if(front==-1)
   {
    printf("\n Queue is Empty\n");
   }
   else{
   front++;

   }
}

int main(){
   int data;
   int option =0;
   
   while(option<4){
      printf("\n Select the option from the menu \n 1.Enqueue \n 2.Dequeue \n 3.Traverse \n 4.Exit \n Enter Option Number \n");
   scanf("%d",&option);
   
   switch (option)
   {
   case 1 : printf("\n Enter the data \n");
            scanf("%d",&data);
            if(flag==0){
                Enqueu(data);
            }
            else{
                printf("\n cannot add data queue is full\n");
            }

    break;
   case 2 :  printf("\n option two is selected dequeu is performed\n");
             Deque();
    break;
   case 3 : if(front!=-1 && rear!=-1){
              for(int i=front ;i<=rear ;i++ ){
             printf("%d",queue[i]);
            }
            }
            else{
                printf("\n Queue is empty cannot traverse over it \n");
            }
           
    break;
    case 4 : exit(0);
   default: printf("\n select valid option from the menu\n");
            option=0;
  
   }

   }

   
    return 0;
}