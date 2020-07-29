#include <stdio.h>
#include <stdlib.h>

int main(){
    float x,y;
    printf("enter the x location: ");
    scanf("%f",&x);
    printf("enter the y location: ");
    scanf("%f",&y);
    if ((x>0)&&(y>0))
    {
        printf("the locantion (%f,%f)is in the first Quadrant",x,y );
    }
        else if ((x<0)&&(y>0))
        {
            printf("the locantion (%f,%f) is in the second Quadrant",x,y);
        }
            else if ((x<0)&&(y<0))
            {
                printf("the locantion (%f,%f) is in the third Quadrant",x,y);
            }
                else if ((x>0)&&(y<0))
                {
                    printf("the locantion (%f,%f) is in the fourth Quadrant",x,y);
                }
                    else if ((x=0)&&(y>0 || y<0))
                    {
                        printf("the location is in the y line");
                    }
                        else if ((y=0)&&(x>0 || x<0))
                        {
                            printf("the location is in the x line");
                        }




    return 0;
}