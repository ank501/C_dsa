#include <stdio.h>
#define size 6
int circular_queue[size];
int front = -1;
int rear = -1;


void Enqueu(int data){
    if(front==0 && rear ==size-1 || front == rear+1 ){
       printf("\n queue is full");
    }
    if(rear!=size-1){
        if(front ==-1){
            front=0; 
        }
        rear++;
        circular_queue[rear]=data;
    }
    if(rear == size -1 && front !=0 ){
          rear=0;
          circular_queue[rear] = data;
    }
}
void dequeu(){
    if(rear==-1 && front ==-1){
        printf("\n circular queue is Empty");
    }
}
int main (){
    return 0;
}