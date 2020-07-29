#include <stdio.h>
#include <stdlib.h>

int main()
{
    int guess=8,youguess;
    do
    {
    printf("pls enter your number to guess: ");
    scanf("%d",&youguess); 
    if(youguess>8)
        {
            printf("too large\n");
        }  
        else if(youguess<8)
        {
            printf("too small\n");
        }
        else if (youguess=8)
        {
            printf("correct\n");
        }
    }  
    while(youguess!=8);
    return 0;
}