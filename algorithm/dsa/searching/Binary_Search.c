#include <stdio.h>

int arr [10] ={1,12,13,16,18,27,38,42,56,68};

int main(){

 int x;
 printf("\n enter the number to search n the array\n");
 scanf("%d",&x);
 
 int first = 0;
 int last = 9;
 int mid = (first+last)/2;
 int found = 0;

 while(first<=last )
 {

 if(x==arr[mid]){
    printf("\n %d is present in array at %d",x,mid);
        found =1;
        break;
 }
 
 if(x<arr[mid]){
    last=mid-1;
    mid=(first+last)/2;
 }
  if(x>arr[mid]){
    first=mid+1; 
    mid=(first+last)/2;
 }
 }
 if(found==0)
 {
  printf("\n %d is not prsent in the array",x);
 }
 return 0;

}

/*
------ Algorithm --------

Divide and conquere 
 --> 1.Array should be sorted , if not first sort the array.
 --> 2.Divide array in two parts.
 --> 3.Take three point one first , last  and mid pointer.
 --> 4.Mid poniter can be find by (first+last)/ 2.
 --> 5.There will be 3 case now 
        ---> a. we could find element at first or mid , while comparing /
        ---> b. we could find element greater than mid or smaller than the mid. 
                In this case the half part will be of no use   
            i).when element greater than mid then mid pointer will become first pointer and new mid pointer will be calculated.
            ii).when element less than mid then mid will become last pointer and new mid pointer will be calculated.
*/