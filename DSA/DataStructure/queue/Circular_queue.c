#include <stdio.h>
#define size 6
int circular_queue[size];
int front = -1;
int rear = -1;


void Enqueu(int data){
    if(front==0 && rear ==size-1 ){
       printf("\n queue is full");
    }
    else {
        circular_queue[rear] = data;
    }
}

int main (){
    return 0;
}