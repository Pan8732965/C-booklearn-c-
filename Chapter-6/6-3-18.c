#include <stdio.h>
#include <stdlib.h>

int main(){
    int score;
   printf("Your score:"); 
   scanf("%d",&score);

   (score>=80)?(printf("%d is A\n",score)):(printf("Failed!!\n"));
      			
   (score<=70&&score>=69)?(printf("%d is B\n",score)):(printf("Failed!!\n"));
            		
    (score<=60&&score>=59)?(printf("%d is C\n",score)):(printf("Failed!!\n"));
                  	
               
//how to do it?


    return 0;
}