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
        printf("今天要上班");
        break;
       case '6':
       case '7':
        printf("今天休息");
        break;
       default:
        printf("輸入錯誤");

        return 0;
   }


    return 0;
}