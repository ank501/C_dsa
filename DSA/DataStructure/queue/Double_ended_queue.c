// ------------------**  Duble Ended Queue  **---------------
// a).add_front 
// b).add_rear
// c).remove_front
// d).remove_rear


#include <stdio.h>
#include <stdlib.h>

#define size 5
int deque[size];
int front = -1;
int rear = -1;
int data;

// ---------------------------------** Enqueu from Rear **---------------------------------

void Enqueue_from_rear(int data){
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

// -----------------------------------** Dequeue from rear **-----------------------------------------

void Dequeue_from_rear(){
    if(front==-1){
        printf("\n deque is empty");
    }
    if(rear==0){
        rear=size-1;
    }
    if(front==rear){
        rear=-1;
        front=-1;
    }
    rear--;
}

// --------------------------------------** Dequeue from the front **-------------------------------------

void Dequeu_from_front(){
    if(front==-1){
        printf("\n Deque is empty\n");
    }
    if(rear==front){
        rear=front=-1;
    }
    if(front == size-1){
        front=0;
    }
    front++;
}
// ---------------------------------** Display Dequeue **---------------------------------------

int main(){
    int option=0;
    while(option<7){
        printf("\nSelect Option from menu \n1.Enqueue from rear \n2.Enqueue from front \n3.Dequeue from rear \n4.Dequeue from front \n5.Display Deque \n6.Exit \n Enter the option number and press Enter key");
        scanf("%d",&option);
        switch (option)
        {
        case 1: printf("\n Enter the data");
                scanf("%d",&data);
                Enqueue_from_rear(data);
            break;
        case 2: printf("\n Enter the data");
                scanf("%d",&data);
                Enqueu_from_front(data);
            break;
        case 3: Dequeue_from_rear();
                printf("Dequeue from rear is performed");
            break;
        case 4: Dequeu_from_front();
                 printf("Dequeue from front is performed");
            break;
        case 5: Display_Deque();
            break;
        case 6: exit(0);
            break;
        
        default: printf("\n Select Appropriate Option\n");
                 option=0;
            break;
        }
    }
    return 0;
}