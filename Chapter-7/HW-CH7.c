#include <stdio.h>
#include <stdlib.h>

int main()
{
    //7.1.1 : 循序性結構、選擇性結構、重複性結構。
    //7.1.2: if else /switch

    //7.2.3
    /*int n,i,sum=0;
    printf("pls enter the final sequence number(odd number): ");
    scanf("%d",&n);
    for(i=1;i<=n;i+=2)
      sum+=i;
   
   printf("1+3+5+...+%d=%d\n",n,sum);*/

   //7.2.4
   /*int i;
   char asc;
   for (i=41;i<=64;i++) 
   {
        asc=i;
       printf("%c",asc);
   }*/

   //7.2.5
   /*int i,sum=0;
   for(i=0;i<=100;i++)
       if((i%3==0)||(i%8==0))
        {
            printf("the number of can / with 3 and 8 is %d\n",i);
            sum+=i;
        }
            printf("the sum is %d",sum);*/

    //7.2.6
    /*int num,n;
    printf("pls enter a number: ");
    scanf("%d",&num);
    for (n=1;n<=num;n++)
        if(num%n==0)
            printf("the factor of %d is %d\n",num,n);
    */

   //7.2.7
   /*int i,sum=0;
   for(i=1;i<=100;i++)
        if(i%6==0)
        printf("the number can / with 6 is %d\n",i);*/

    //7.2.8
    /*int i,sum=0;
    for(i=1;i<=100;i++)
        if((i%7==0)&&(i%3==0))
        printf("the number can / with 7 and 3 is %d\n",i);*/

    //7.2.10
    /*int i,sum=0;
    for(i=1;i<=50;i++)*/

    //7.2.11
    /*int n,i,sum=0;
    printf("pls enter a number: ");
    scanf("%d",&n);
    for(i=1;i)*/

    //7.3.13

    /*int i,sum=0,num;
        printf("請輸入偶數且為正整數: ");
            scanf("%d",&num);
    while((num%2!=0)||(num<=0))
    {
        printf("請再次輸入: ");
        scanf("%d",&num);
    }
    while(i<=num)
    {
        sum+=i;
        i+=2;
    }
        printf("2+4+6+...+%d=%d",num,sum);*/

    //7.3.14 not fixed
    /*int r=3000,time;

    while(r<5)
    {
        r=r/2;
        printf("the day of rape spends %d",time);
        time=time+1;*/
    //7.3.15
   //char ch;
   //while(ch!=17)			/* 當按下的鍵不是Ctrl+q時 */
  // {
      // ch=getch();			/* 從鍵盤取得字元 */
      // printf("ASCII of ch=%d\n",ch);	/* 印出取得字元的ASCII碼 */
  // }
   //printf("您已按了Ctrl+q...\n");
    //因為當第98行ASCII=17時，就會跳到95行while迴圈判斷程式是否持續

     //7.3.16
     /*char ch;
     while(ch!=17)			/* 當按下的鍵不是Ctrl+q時 */
   /*{
       ch=getche();			/* 從鍵盤取得字元 */
       printf("ASCII of ch=%d\n",ch);	/* 印出取得字元的ASCII碼 */
   }
   printf("您已按了Ctrl+q...\n");*/
         
    }*/

    int i,num,sum=0;
    while(i<=10)
    {
        sum=sum+i*i;
        printf("%d",sum);

    }

    return 0;

}