#include <stdio.h>
#include <stdlib.h>

/*void countto3(int);

int main(){
    countto3(3);
    return 0;
}
void countto3(int i){
    if(i>=1){
        printf("%d\n",i);
        countto3(i-1);
    }
}*/
//----
/*#include <stdio.h>
#include <stdlib.h>

void countto1(int);

int main(){
    countto1(1);
    return 0;
}
void countto1(int i){
    if(i<=3){
        countto1(i+1);
        printf("%d\n",i);
    }
}*/
//------
/*int sum(int);
int main()
{
    int n;
    printf("pls enter a number: ");
    scanf("%d",&n);
    printf("%d",sum(n));
    return 0;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    return sum(n-1)+n;
}*/
//-------
int s(int);
int main(){
    int n;
    printf("pls enter n=");
    scanf("%d",&n);
    printf("%d\n",s(n));
}
int s(int n){
    if(n<=2){
        return n;
    }
    return s(n-1)+s(n-2);
}
