#include <stdio.h>
#include <stdlib.h>

int main(){
   char number;
   printf("Pls enter a number(1~7): ");
   scanf("%c",&number);
   switch(number)
   {
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        printf("���ѭn�W�Z");
        break;
       case '6':
       case '7':
        printf("���ѥ�");
        break;
       default:
        printf("��J���~");

        return 0;
   }


    return 0;
}