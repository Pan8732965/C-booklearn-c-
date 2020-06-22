#include <stdio.h>
#include <stdlib.h>

int main(){
    int year;
    printf("pls enter the year: ");
    scanf("%d",&year);
    if ((year%4==0 && year%100!=0)||(year%400==0 && year%4000!=0))
        printf("it's leap year\n");
        else
        {
            printf("it's not leap year\n");
        }
        

    return 0;
}