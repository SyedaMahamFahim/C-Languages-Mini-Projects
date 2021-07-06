#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int PlayerNo1_Number, PlayerNo1_GuessNumber, PlayerNo1_Count = 1;
    int option;
    srand(time(0));
    PlayerNo1_Number = rand() % 1000 + 1;
    printf("Guess The Number Game\n");
    printf("Guess the number in between 1 t 1000\n");
    printf("%d\n", PlayerNo1_Number);
    do
    {
    optionplay:
        scanf("%d", &PlayerNo1_GuessNumber);
        if (PlayerNo1_GuessNumber > PlayerNo1_Number)
        {
            printf("Enter the lower number\n");
        }
        else if (PlayerNo1_Number > PlayerNo1_GuessNumber)
        {
            printf("Enter the higher number\n");
        }
        else if (PlayerNo1_Number == PlayerNo1_GuessNumber)
        {
            printf("Player no.1 gussed in %d attempsts\n", PlayerNo1_Count);
            printf("Do you want to play again?(y or n)\n");
            scanf("%d", &option);

            if (option == 1)
            {
                goto optionplay;
            }
            else if (option == 0)
            {
                goto out;
            }
        }
        PlayerNo1_Count++;

    } while (PlayerNo1_Number != PlayerNo1_GuessNumber);
    printf("Thank you for playing\n");
    out:
    return 0;
}