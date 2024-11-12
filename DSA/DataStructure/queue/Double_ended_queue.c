// ------------------**  Duble Ended Queue  **---------------
// a).add_front 
// b).add_rear
// c).remove_front
// d).remove_rear


#include <stdio.h>
#define size 5
int deque[size];
int front = -1;
int rear = -1;

// ---------------------------------** Enqueu from Rear **---------------------------------

void enqueue_from_rear(int data){
    if(rear==size-1 && front ==0 || front == rear+1){
        printf("\n  Deque is Full \n");
    }
    else if(rear == size-1 && front !=0){
            rear == 0;
            deque[rear]=data;
    }
    else{
        if(front ==-1){
            front =0;
        }
        rear++;
        deque[rear]=data;
    }
}

// -------------------------------------** Enqueu from Front **-------------------------------

void Enqueu_from_front(int data) {
    if(rear==size-1 && front ==0 || front == rear+1){
        printf("\n  Deque is Full \n");
    }else{
         if(front==0){
            front=size-1;
         }
         if(front ==-1 ){
            front = 0;
            rear = 0;
         }
         front--;
         deque[front]=data;
    }
}



int main(){
    return 0;
}