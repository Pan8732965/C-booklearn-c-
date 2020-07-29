#include <stdio.h>
#include <stdlib.h>

int main(){
    int month;
    printf("pls enter the month: ");
    scanf("%d",&month);
    if ((month>=3)&&(month<=5))
    {
        printf("it's spring");
    }
        else if ((month>=6)&&(month<=8))
        {
            printf("it's summer");
        }
            else if ((month>=9)&&(month<=11))
            {
                printf("it's fall");
            }
            else if ((month<=2)&&(month=12))
                {
                    printf("it's winter");
                }
                    else
                    {
                        printf("unknown");
                    }
                    
    return 0;
}