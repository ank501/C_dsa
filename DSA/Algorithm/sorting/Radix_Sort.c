#include<stdio.h>

// ---------------------------------------** Count Function ** ----------------------------

void count (int arr[] ,int size,int exp ){

int frearr[10]={0};              // Frequency Array of size 10 , from 0-9 for single digit sorting.
int outputarr[size];             //sorted output array ;

// ---------------------------------------** Loop for Updating the frequency of digits **------------------------------
 for(int i=0;i<size;i++){
     frearr[(arr[i]/exp)%10]++;   
 }
// -------------------------------------** Loop for Cumulative frequency of digits **----------------------------
 for(int i=1;i<10;i++){
     frearr[i]+=frearr[i-1];
 }
// -------------------------------** iteration over original array and update output array with sorting **-----------------
 for(int i=size-1;i>=0;i--){
    outputarr[frearr[(arr[i]/exp)%10]-1]=arr[i];
    frearr[(arr[i]/exp)%10]--;
 }
// -------------------------------** Updation of original array with output arraay **-------------------------------
 for(int i=0;i<size;i++){
    arr[i]=outputarr[i];
 }
}

// -----------------------------------------** Radix Fuction **-------------------------------------------

void Radix(int arr[],int size,int max){
   for(int exp=1 ; max/exp>0 ;exp*=10){
    count(arr,size,exp);
   }
}

// -----------------------------------------** Main function **------------------------------------------------

int main (){
    int arr[6] = {192,168,987,346,267,111};
    int max = arr[0] ;
// ----------------------------------------** Print before sorting **-----------------------------
   printf("\n before sort \n");
     for(int i=0;i<6;i++){  
        printf("%d ",arr[i]);
      
      }
// ----------------------------------------** Max function **-------------------------------------------
    for(int i=0;i<6;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
// ----------------------------------------** Invoked Radix function **------------------------------------

     Radix(arr,6,max);

// ----------------------------------------** Print after Sorting **-------------------------------------
        printf("\n after sort \n");
      for(int i=0;i<6;i++){
        printf("%d ",arr[i]);
     
      }

    return 0;
}