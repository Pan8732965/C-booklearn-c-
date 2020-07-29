#include <stdio.h>
#include <stdlib.h>
 
 int main()
 {
     /*int num,i,j; //實心
     printf("pls enter a number: ");
     scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    /*int i,j,num; //空心(座標法)
    printf("pls enter your number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||i==num||i==j)
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
            
        }
        printf("\n");
    }*/

    /*int i,j,num; //空心
    printf("pls enter your number: ");
    scanf("%d",&num);
    printf("*\n");
    for(i=0;i<=num-3;i++)
    {
        printf("*");
        for(j=1;j<=i;j++)
        {
            printf(" ");
        }
        printf("*\n");
    }
    for(i=1;i<=num;i++)
    {
        printf("*");
    }*/
    
    int i,j,num; //右下角實心
    printf("pls enter your number: ");
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=num;j++)
        {
            if(j==num||i==1||i==j)
            {
                printf("*");
            }
            else
            {
              printf(" ");  
            }
            
        }   
        printf("\n");
    }
   
     return 0;
 }