/* Program for evaluating prefix expression */

#include <stdio.h>
#include <string.h>
#define SIZE 20

int stack[SIZE] ;
int top=-1;

void push(int operand){
    if(top==SIZE){
        printf("\n Stack overflow");
    }
    else{
        top++;
        stack[top]=operand;
    }
}
void pop(){
    if(top==-1){
        printf("\n Stack underflow");
    }
    else{
        top--;
    }
}


int main()
{   int i ,op1,op2;
    char op,preexp[30];
    printf("\n enter a prefix exp");
    scanf("%s",preexp);
    for(i=strlen(preexp)-1;i>=0;i--){
        if(preexp[i]>='0' && preexp[i]<='9'){
            push(preexp[i]-'0');
        }
        else{
            op2=stack[top];
            pop();
            op1=stack[top];
            pop();
            
            char res;
            switch(preexp[i]){
                case '+' : res=op2+op1;break;
                case '-' : res=op2-op1;break;
                case '*' : res=op2*op1;break;
                case '%' : res=op2%op1;break;
                case '/' : res=op2/op1;break;

            }
            push(res);
        }
    }
    printf("%d",stack[top]);
    return 0;
}




