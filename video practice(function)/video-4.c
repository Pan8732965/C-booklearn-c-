#include <stdio.h>
#include <limits.h>

/*int count(void){
    static int k=0; //靜態static 只會初始化一次
    k++;
    return k;
}
int main(){
    int  i;
    for(i=1;i<=5;i++){
        printf("%d\n",count());
    }
    return 0;
}*/
//-------------
/*int main(){
    unsigned int a=1000;
    unsigned int b=a*a*a;
    unsigned int c=a*a*a*a;
    printf("%u\n",b);
    printf("%u\n",c);
    printf("%u\n",UINT_MAX);  //1000000000000%(UINT_MAX+1) 無號整數的溢位不是未定義行為
    return 0;
}*/
//-------------
/*int main(){
    unsigned int next=1; //unsigned 無號數為只有0和大於0的數
    int i;
    for(i=1;i<=5;i++){
        next=next*1103515245+12345;
        printf("%u\n",next);
    }
    return 0;   
}*/
//-------------
/*static unsigned int _next=1;
int rand(void){
    
    _next=_next*1103515245+12345;
    return _next/65536%32768;
}
void srand(unsigned int seed){
    _next=seed;
}
int main(){
    int i;
    for(i=1;i<=5;i++){
        printf("%d\n",rand());
    }
    return 0;
}*/
