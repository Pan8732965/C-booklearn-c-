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
        printf("�z��JA");
        break;
       case 'b':
       case 'B':
        printf("�z��JB");
        break;
       default:
        printf("�z��J���OA��B!");

        return 0;
   }


    return 0;
}