#include <stdio.h>
#include <string.h>
#define size 20
int top = -1;
int stack[size];

// Push function ;
void push(int data) {
 if(top==size-1){
    printf("\n stack overflow");
 }
  top++;
  stack[top]=data;
}

// Pop function ;
void pop(){
  if(top==-1){
    printf("\n stack underflow");
  }
   top--;
}

// main function ;
int main(){
    if(stack[top]=="")
    return 0;
}

