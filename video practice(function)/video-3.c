#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/////////////------------
/*int main(){
    srand(time(0));
    int i;
    for(i=1;i<=5;i++){
        printf("%d\n",rand());
    }
}*/
//-----------
/*int main(){
    srand(time(0));
    int i;
    for(i=1;i<=5;i++){
        int dice=rand()%6+1;
        printf("%d\n",dice);
    }
    return 0;
}*/
//-------------
void choose_option(void);
int main(){
    srand(time(0));//不要每次都一樣的
    int answer=rand()%100;//range at 1~99
    int guess;
    char option;
    do{
    printf("pls enter your number to guess(1~99): ");
    scanf("%d",&guess);
    if(guess>answer){
        printf("too large\n");
    }
    else if(guess<answer){
        printf("too small\n");
    }
    else if(guess==answer){
        printf("got it! The answer is %d\n",answer);
    }while(guess!=answer);
    void choose_option();  
    return 0;    
}

void choose_option(void){
    do{
        printf("want to play again?(y/n):\n");
        scanf(" %c",&option);
    }while(option=='y');
    return;
}
