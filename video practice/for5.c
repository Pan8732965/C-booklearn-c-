#include <stdio.h>
#include <stdlib.h>
 
 int main()
 {
     /*int num,i,j; //���
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

    /*int i,j,num; //�Ť�(�y�Ъk)
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

    /*int i,j,num; //�Ť�
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
    
    int i,j,num; //�k�U�����
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