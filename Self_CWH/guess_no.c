/* AIM: To create a game where the players have to guess a system-generated random number
*  in the least number of steps.
*  program developed by Anuvab Chakravarty.
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
    int num,guess,attempt=1;
    //to generate a random number
    srand(time(0));
    num=rand()%100+1;//number to be guessed
    printf("\n*****WELCOME TO THE NUMBER GUESSING GAME!!*****\n\n");
    printf("Guess numbers between 1 and 100 to arrive at the right answer...\n");
    printf("BEST OF LUCK!!\n\n");
    do
    {
        printf("\nATTEMPT#%d\n",attempt);
        printf("Enter your guess:\n");
        scanf("%d",&guess);
        if(guess<1||guess>100)
        {
        printf("Invalid input...number lies between 1 and 100(both inclusive)\n");
        attempt++;
        continue;
        }//end of if block
        if(guess>num)
        printf("Try a smaller number...Better luck next time.\n");
        else if(guess<num)
        printf("Try a larger number...Better luck next time.\n");
        else
        {
        printf("CONGRATULATIONS!!\nYou have arrived at the right answer.\n");
        printf("Number of attempts:%d",attempt);
        break;
        }//end of else block
        //end of if-else-if ladder
        attempt++;
    } while(guess!=num);//end of do-while loop
    return 0;
}//end of main