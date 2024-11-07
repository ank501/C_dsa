#include <stdio.h>

void tower_of_hanoi(int disc,char s,char d,char a){
      if(disc==0){
        return;
      }
      tower_of_hanoi(disc-1,s,a,d);
      printf("\n move disc from %c to %c",s,d);
      tower_of_hanoi(disc-1,a,d,s);
}

int main(){
    tower_of_hanoi(3,'A','B','C');
    return 0;
}

/*
   -----------* Algorithm *-----------



*/