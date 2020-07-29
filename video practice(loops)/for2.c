#include <stdio.h>
#include <stdlib.h>

/*int main()
{
    int n,i;
    printf("pls enter your number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("*");
    }

    return 0;
}*/

/*int main()
{
    /**/

      //break
    /*int max;
    printf("pls enter your max value: ");
    scanf("%d",&max);
    int i;
    for(i=max;i>=1;i--)
      {
          if((i%3==2)&&(i%5==3)&&(i%7==2))
          {
              break;
          }
      }  
          printf("%d",i);
    
        
    return 0;
}*/

/*int main()
{
    int n,i;
    printf("pls enter a positive number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            printf("Positive factor ¥¿¦]¼Æ : %d\n",i);
        }
    }
    return 0;
}*/

    int main()
    {
        int max;
        printf("pls enter a max value: ");
        scanf("%d",&max);
        int answer=0,i;
        for(i=1;i<=max;i++)
        {
            if((i%3==2)&&(i%5==3)&&(i%7==2))
            {
                answer=i;
            }
        }
        if(answer!=0)
        {
            printf("%d\n",answer);
        }

        return 0;
    }
    
