#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int n; //�g�k�@
    printf("pls enter a number: ");
    scanf("%d",&n);
    int isprime=1;
    int i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
       {
        isprime=0; //�i�H�O�H�Q�㰣"���O���"�A0�����O�A1���O�C
       }
        
    }
        if(isprime==1)
        {
            printf("yes it's odd number.");
        }
        else
        {
            printf("no it's not odd number.");
        }*/
    
    /*int n; //�g�k�@
    printf("pls enter a number: ");//��Ʃw�q:�ۤv�i�H�㰣�ۤv�A��L�Ƥ���(���F1)�C
    scanf("%d",&n);
    int i;
    for(i=2;i<n && i%n!=0;i++); //�u�����H�ۤv�l��=0(�����)�A�ҥH�j�����o��!=0���٤��O��ơC
    if(i==n) //�p�W�Ai==n�A�u�����H�ۤv�l��=0(�����)�C
    {
        printf("yes it's prime number.");
    }
    else
    {
        printf("no it's not prime number.");
    }*/

    /*int a,b;
    for(a=1;a<=9;a++)
    {
        for(b=1;b<=9;b++)
        {
            printf("%d x %d=%d\n",a,b,a*b);
        }
    }   */

    /*int a,b,number;
    printf("pls enter a number: ");
    scanf("%d",&number);
    for(a=1;a<=number;a++)
    {                           //�̥~�h�j����]�A�A�]�~��A�~�鬰��A���鬰�n�X�ӬP�C
        for(b=1;b<=number;b++)
        {
            printf("*");
        }
        printf("\n");
    }*/

    /*int a,b,number;
    printf("pls enter a number: ");
    scanf("%d",&number);
    for(a=1;a<=number;a++)
    {
        printf("*");
    }
        printf("\n");
        
        for(b=1;b<=number-2;b++)
        {
            printf("*");//the first * to print
            for(a=1;a<=number-2;a++)
            {
                printf(" "); 
            }
            printf("*\n"); //the final * to print
        }
    for(a=1;a<=number;a++)
    {
        printf("*");
    }
        printf("\n");*/

        int i,j,num; //i=straight,j=horizontal��
        printf("pls enter a number: ");
        scanf("%d",&num);

        for(i=1;i<=num;i++)
        {
            for(j=1;j<=num;j++)
            {
                if(i==1||i==num||j==1||j==num) //youtube link: https://www.youtube.com/watch?v=mZi5YxY78jk&list=PLY_qIufNHc293YnIjVeEwNDuqGo8y2Emx&index=92&loop=0
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