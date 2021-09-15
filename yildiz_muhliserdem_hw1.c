#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

void checkGuess(int,int,int*,int*,int*,int*);


int main()
{
    int guess1,guess2,pts1=0,pts2=0,luckyNum,flag=0;


    srand(time(0));
    luckyNum=(rand()% 1000)+1 ;
    printf("\n A lucky number has been generated randomly. \n");
    printf("\n The lucky number is %d\n",luckyNum);



    while(flag != 1)
    {
        printf("\n*******************************************\n");
        printf("Player 1 enter your guess:  ");
        scanf("%d",&guess1);
        printf("Player 2 enter your guess:  ");
        scanf("%d",&guess2);
        if(guess1 < 0 || guess2 < 0)
           printf("\nThere is an invalid guess! Try again.");
        else
        {
           checkGuess(guess1,guess2,&pts1,&pts2,&luckyNum,&flag);
        }

    }

                printf("\nThe scores are\n");
                printf("Player 1: %d \n",pts1);
                printf("Player 2: %d \n",pts2);
    return 0;
}

    void checkGuess(int one, int two, int *pts1, int *pts2, int *luckyNum, int *flag)
    {


    printf("\nProximity of Player 1's guess to the lucky number is: %d.\n",abs(*luckyNum-one));
    printf("Proximity of Player 2's guess to the lucky number is: %d.\n",abs(*luckyNum-two));



    if(one==*luckyNum)
        {
        printf("Player 1 has guessed the number correctly.\n");
        *(pts1)++;
        *flag=1;
        }
    else if(two==*luckyNum)
        {
        printf("Player 2 has guessed the number correctly.\n");
        (*pts2)++;
        *flag=1;
        }

    else if((abs(*luckyNum-one))< (abs(*luckyNum-two)))
        {
        printf("\nPlayer 1's guess is the closest to the lucky number.");
        (*pts1)++;
        }
    else if((abs(*luckyNum-two))< (abs(*luckyNum-one)))
        {
        printf("\nPlayer 2's guess is the closest to the lucky number.");
        (*pts2)++;
        }
    else
        {
        printf("\nPlayer 1's and Player 2 's guess are the same.");
        (*pts1)++;
        (*pts2)++;
        }


    }




