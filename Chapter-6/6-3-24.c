#include <stdio.h>
#include <stdlib.h>

int main(){
   int i=0,sum=0;
   start:
    i++;
    if (i%2!=0)
    {
        printf("%d",i);
        printf("+");
        sum+=i;
        
    }
    if (i<100)
    {
        goto start;
    }
    
    
    printf("=%d\n",sum);

    return 0;
}