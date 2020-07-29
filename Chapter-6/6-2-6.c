#include <stdio.h>
#include <stdlib.h>

int main(){
    int weight,tall;
    printf("pls enter your weight:");
    scanf("%d",&weight);
        printf("pls enter your tall:");
            scanf("%d",&tall);
    if ((weight>90)&&(tall<180))
    {
        printf("you have to lose weight");
    }        
    else
    {
        printf("normal weight");
    }
    
    
    
 


    return 0;
}