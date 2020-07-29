#include <stdio.h>
#include <stdlib.h>

int main(){
    int score;
    int count=0,count1=0,count2=0,count3=0;
    here:
    printf("enter the students' grade:");
    scanf("%d",&score);
    count++;
    if (score<60)
    {
    printf("the grade is C\n");
    count1++;
    }
        else if ((score>=60)&&(score<=75))
        {
            printf("the grade is B\n");
            count2++;
        }
    
            else if((score>=76)&&(score<=100))
            {
                printf("the grade is A\n");
                count3++;
            }
    if (count<10)goto here;
    printf("ten students' grade is already loaded in\n");
    printf("we have %d students got A\n",count3);
    printf("we have %d students got B\n",count2);
    printf("we have %d students got C\n",count1);

    return 0;
}