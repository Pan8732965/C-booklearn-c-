#include <stdio.h>
#include <stdlib.h>

int main(){
   char num;
   printf("Pls enter a number(1~4): ");
   scanf("%c",&num);
   switch(num)
   {
       case '1':
        printf("%c:春天",num);
        break;
       case '2':
        printf("%c:夏天",num);
        break;
       case '3':
        printf("%c:秋天",num);
        break;
       case '4':
        printf("%c:冬天",num);
        break;
       default:
        printf("輸入錯誤!");

        return 0;
   }


    return 0;
}