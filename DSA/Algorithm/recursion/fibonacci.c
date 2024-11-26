#include <stdio.h>
#include <stdlib.h>

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return   fibo(n-1)+fibo(n-2);
}
int User_input(){
                 int option = -1 ;
                 int x ;
                 printf("\n 1. Enter the number which you want to find the fibbonacci \n 2. Press 2 for Exit ");
                 printf("\n Select option \n");
                 scanf("%d",option);
                 printf("\n Enter number \n");
                 scanf("%d",&x);
                 int res = fibo(x);
                 printf("Fibonacci value of %d of is %d",x,res);
}

int main(){
    int option = 1 ;
    while(option <2 ){
        int x ;
        switch (option)
        {
        case 2 : exit(0);
            break;
        case 1 :     User_input();
        break;
        default: printf("\n select valid option"); 
                 option=0;
            break;
        }
        
    }
   
    return 0;
}

// 
// 