#include <stdio.h>
#include <stdlib.h>

int main(){
   char word;
   printf("Pls enter a word(a or b): ");
   scanf("%c",&word);
   switch(word)
   {
       case 'a':
       case 'A':
        printf("您輸入A");
        break;
       case 'b':
       case 'B':
        printf("您輸入B");
        break;
       default:
        printf("您輸入不是A或B!");

        return 0;
   }


    return 0;
}