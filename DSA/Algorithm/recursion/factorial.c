#include<stdio.h>

int fact(int n){
    if(n==1||n==0){
        return 1;
    }
   return n*fact(n-1);
}

int main (){
    int res ,x;
    printf("\n Enter the number for finding factorial :- ");
    scanf("%d",&x);
    res =fact(x);
    printf("%d",res);
return 0;
}