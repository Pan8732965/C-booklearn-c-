#include <stdio.h>
#include <stdlib.h>

/*int f(int x)

int main(void)
{
    printf("%d\n",f(4));
}
int f(int x){ //int f(int x)，int x為型態，f 為main方的f
    return x+3;
}*/

double div2(double x){
    return x/2;
}
int main()
{
    int n;
    printf("pls enter a number: ");
    scanf("%d",&n);
    printf("the answer is %f\n",div2(n));
    return 0;
}