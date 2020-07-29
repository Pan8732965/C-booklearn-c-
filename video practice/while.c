#include <stdio.h>
#include <stdlib.h>

int main()
{
    int ennum,sum=0;
    printf("pls enter your number(quit0): ");
                scanf("%d",&ennum);
        while(ennum!=0)
        {
            sum=sum+ennum;
                scanf("%d",&ennum);
        }
        printf("the sum is %d",sum);
            

    return 0;
}
