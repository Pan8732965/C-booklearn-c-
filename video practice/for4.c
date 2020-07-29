#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*int n; //寫法一
    printf("pls enter a number: ");
    scanf("%d",&n);
    int isprime=1;
    int i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
       {
        isprime=0; //可以別人被整除"不是質數"，0為不是，1為是。
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
    
    /*int n; //寫法一
    printf("pls enter a number: ");//質數定義:自己可以整除自己，其他數不行(除了1)。
    scanf("%d",&n);
    int i;
    for(i=2;i<n && i%n!=0;i++); //只有除以自己餘數=0(為質數)，所以迴圈轉到這裡!=0為還不是質數。
    if(i==n) //如上，i==n，只有除以自己餘數=0(為質數)。
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
    {                           //最外層迴圈先跑，再跑外圈，外圈為行，內圈為要幾個星。
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

        int i,j,num; //i=straight,j=horizontal橫
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