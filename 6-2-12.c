#include <stdio.h>
#include <stdlib.h>

int main(){
    int score;
    printf("pls enter the the grade: ");
    scanf("%d",&score);
    if ((score>=0)&&(score<=59))
    {
        printf("the student grade is C\n");
    }
        else if ((score>=60)&&(score<=79))
        {
            printf("the student grade is B\n");
        }
            else if ((score>=80)&&(score<=100))
            {
                printf("the student grade is A\n");
            }
                else 
                    printf("unknown");
                

    return 0;
}