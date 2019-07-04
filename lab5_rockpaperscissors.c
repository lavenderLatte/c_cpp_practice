/*  Lab 5 - Rock Paper Scissors 

	Name: Hana Ra
	CIS054 C/C++ Programming
	Date: 6/29/2019

	Inputs: player1, player 2 - (R)ock, (P)aper, or (S)cissors
	Output: winner of the round
*/

#include <stdio.h>
#include <ctype.h> // for toupper function

int main (int argc, char* argv[])
{
	// variables
	char player1;
	char player2;
	char playAgain = 'Y';
	char correctForm = 'N';

	do
	{
		// get input from users
		printf ("Player 1's move (R, P, S): ");
		scanf (" %c", &player1);
		player1 = toupper(player1);

		printf ("Player 2's move (R, P, S): ");
		scanf (" %c", &player2);
		player2 = toupper(player2);

		// decide winner of a round
		if (player1 == 'R')
		{
			if (player2 == 'R')
				printf ("Tie game\n");
			else if (player2 == 'P')
				printf("Player 2 wins, paper covers rock\n");
			else if (player2 == 'S')
				printf("Player 1 wins, rock breaks scissors\n");
			else
				printf("Illegal selection for player 2\n");
		}
		else if (player1 == 'P')
		{
			if (player2 == 'R')
				printf ("Player 1 wins, paper covers rock\n");
			else if (player2 == 'P')
				printf("Tie game\n");
			else if (player2 == 'S')
				printf("Player 2 wins, scissors cut paper\n");
			else
				printf("Illegal selection for player 2\n");
		}
		else if (player1 == 'S')
		{
			if (player2 == 'R')
				printf ("Player 2 wins, rock breaks scissors\n");
			else if (player2 == 'P')
				printf("Player 1 wins, scissors cut paper\n");
			else if (player2 == 'S')
				printf("Tie game\n");
			else
				printf("Illegal selection for player 2\n");
		}
		else
		{
			printf("Illegal selection for player 1\n");
		}

		// check and wait until user gives correct input to continue(Y) or not to continue(N) to play
		do
		{
			printf ("Play again? Y/N: ");
			scanf (" %c", &playAgain);
			playAgain = toupper(playAgain);

			if (playAgain == 'Y' || playAgain == 'N')
				correctForm = 'Y';		
		}
		while (correctForm == 'N');		
		printf ("\n");
	}
	while (playAgain == 'Y');
	return 0;
}