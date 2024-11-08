#include <stdio.h>
#define size 5

int queue[size];
int front;
int rear;
int option;

front=-1;
rear=-1;
void Enqueu(int data)
{
    if(rear == size-1)
    {
        printf("\n Queue is Full");
    }
    else 
    {  
       front=0;
       rear++;
       queue[rear]=data;
    }
}
void Deque()
{
   if(front==rear+1)
   {
    printf("\n Queue is Empty");
   }
   front++;
}
int main(){
    
    return 0;
}