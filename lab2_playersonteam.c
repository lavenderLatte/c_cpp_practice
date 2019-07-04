/*  Lab 2 - Players On Team

	Hana Ra
	CIS054 C/C++ Programming
*/

#include <stdio.h>

int main(int argc, char* argv[])
{
	/*
	Description:
	Determine whether a sports team manager needs to add more players to make a full team or cut players from the team if there are too many. 
	The program needs to display the number of additional players needed if there are not enough, or the number of extra players to be eliminated. 
	The program also needs to reject negative inputs and non-numeric inputs.

	Inputs: teamSize, playersOnTeam
	Output: morePlayersNeeded or extraPlayers or just a message
	*/

	// variables
	int teamSize;
	int playersOnTeam;
	int morePlayersNeeded;
	int extraPlayers;
	int scanfCount;

//	printf ("[ %d ]\n", scanfCount);                       // for debugging
	// input: get team size from user
	printf ("How many players should be on the team? ");
	scanfCount = scanf ("%d", &teamSize);  
//	printf ("[ %d ]\n", scanfCount);                       // for debugging

	// check non-numeric input value
	if (scanfCount != 1) // scanf returns 1 when input is correct. 
	{
		printf ("Illegal entry for team size.\n");
		return 1; // indicate an error
	}
	// check negative input value
	if (teamSize < 1)
	{
		printf("Negative values are not allowed.\n");
		return 1;
	}
//	printf ("[ %d ]\n", scanfCount);                        // for debugging

	// input: get current size of the team
	printf ("How many players are on the team? ");
	scanfCount = scanf ("%d", &playersOnTeam);
//	printf ("[ %d ]\n", scanfCount);                       // for debugging
//	printf ("[ %d ]\n", playersOnTeam);                    // for debugging

	// check non-numeric input value
	if (scanfCount != 1)
	{
		printf ("Illegal entry for players on the team.\n");
		return 1; 
	}
	// check negative input value
	if (playersOnTeam < 1)
	{
		printf("Negative values are not allowed.\n");
		return 1;
	}

	// output: morePlayersNeeded or extraPlayers or just a message
	if (playersOnTeam < teamSize)
	{
		printf ("There are not enough players.\n");
		morePlayersNeeded = teamSize - playersOnTeam;
		printf("%d players are needed.\n", morePlayersNeeded);
	}
	else if (playersOnTeam > teamSize)
	{
		printf ("There are too many players.\n");
		extraPlayers = playersOnTeam - teamSize;
		printf("%d players need to be eliminated.\n", extraPlayers);
	}
	else
	{
		printf("You have the correct number of players.\n\n");
	}
	return 0;
}