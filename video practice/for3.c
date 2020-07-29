#include <stdio.h>
#include <stdlib.h>
int main()
{
    /*int i,count=0;
    for(i=1;i<=1000;i++)
    {
        if((i%3==2)&&(i%5==3)&&(i%7==2))
        {
            count++;
            if(count<=3){
            printf("%d\n",i);}
        
        }
         
        
    }*/

    /*int i,count=0;
    for(i=1000;i>=1;i--)
    {
        if((i%3==2)&&(i%5==3)&&(i%7==2))
        {
            count++;
            if(count<=3){
            printf("%d\n",i);}
        
        }
    }
    return 0;
}*/

int i,count=0;
    for(i=1000;i>=1;i--)
    {
        if((i%3==2)&&(i%5==3)&&(i%7==2))
        {
            count++;
            if(count==3){
            printf("%d\n",i);}
        
        }
    }
    return 0;
}