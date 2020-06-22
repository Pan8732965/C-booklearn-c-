#include <stdio.h>
#include <stdlib.h>

int main(){
    int tri1=12,tri2=14,tri3=24;
    if (tri1+tri2>tri3)
    {
        printf("It can be formed with triangle");
    }
        else if (tri1+tri2<tri3)
        {
            printf("It can not be formed with triangle");
        }
            else
            {
                printf("unknown");
            }
    
    
    return 0;
}