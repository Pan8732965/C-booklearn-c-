#include <stdio.h>
#include <stdlib.h>

int main(){
   char num;
   printf("Pls enter a number(1~4): ");
   scanf("%c",&num);
   switch(num)
   {
       case '1':
        printf("%c:�K��",num);
        break;
       case '2':
        printf("%c:�L��",num);
        break;
       case '3':
        printf("%c:���",num);
        break;
       case '4':
        printf("%c:�V��",num);
        break;
       default:
        printf("��J���~!");

        return 0;
   }


    return 0;
}