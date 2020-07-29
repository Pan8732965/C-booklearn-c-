#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b;
    for(a=1;a<=30;a++)
    {
        for(b=1;b<=30;b++)
        {
            if((a+b==30)&&(a*b==221)&&(a<=b))
            {
                printf("a=%d,b=%d\n",a,b);
            }
        }
    }
    //¼gªk¤G
    /*int a;
    for(a=1;a<=30/2;a++)
    {
        int j=30-i;
        if(i*j==221)
        {
            printf("%d,%d",i,j);
        }
    }
    return 0;
}