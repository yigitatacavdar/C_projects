#include <stdio.h>
#include <time.h>
#include <stdlib.h>

/*Needs a good randomizer*/

int main()
{
    char input1[10];
    char cards[] = "JQK";
    char a_card = cards[2];
    cards[2] = cards[1];
    cards[1] = cards[0];
    cards[0] = cards[2];
    cards[2] = cards[1];
    cards[1] = a_card;
   
    printf("Welcome stranger! Care to play Three Card Monte?\n");
    system("pause");
    printf("Try and guess the cards King, Jack and Queen\n");
    scanf("%2s", input1);

    int cards1 = *cards;
    int inputs1 = *input1;

    if(inputs1 == cards1)
    {
        printf("you win!! The cards were %2s", cards);
        return 0;
    } 

    else
    {
        printf("you lose! The cards were %2s", cards);
        return 0;
    }

}