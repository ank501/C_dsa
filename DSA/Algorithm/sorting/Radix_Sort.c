#include<stdio.h>

void count (int arr[] ,int size,int exp ){
  int frearr[10]={0};
 int outputarr[size];


 for(int i=0;i<size;i++){
     frearr[(arr[i]/exp)%10]++;
 }

 for(int i=1;i<10;i++){
     frearr[i]+=frearr[i-1];
 }

 for(int i=size-1;i>=0;i--){
    outputarr[frearr[(arr[i]/exp)%10]-1]=arr[i];
    frearr[(arr[i]/exp)%10]--;
 }

 for(int i=0;i<size;i++){
    arr[i]=outputarr[i];
 }
}

void Radix(int arr[],int size,int max){
   for(int exp=1 ; max/exp>0 ;exp*=10){
    count(arr,size,exp);
   }
}


int main (){
    int arr[6] = {192,168,987,346,267,111};
    int max = arr[0] ;
   printf("\n before sort \n");
     for(int i=0;i<6;i++){  
        printf("%d ",arr[i]);
      
      }

    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
     Radix(arr,6,max);

        printf("\n after sort \n");
      for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
     
      }

    return 0;
}