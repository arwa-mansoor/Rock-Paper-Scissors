#include <stdio.h>
#include <time.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>
#include <windows.h>

struct Scores{
	int player;
	int computer;	
}scoreBoard[5];

char computerChoiceGeneration();
char playerChoiceAsking();
struct Scores calculatingScore(char player, char computer);
void displayScoreBoard(int totalScorePlayer, int totalScoreComputer);
int playAgain();
void initializeScoreBoard();
void displayRoundScores(int roundScorePlayer, int roundScoreComputer);
void clearScreen();

int main()
{
	system("COLOR E1");
	srand(time(NULL));
	bool exit = false;
	initializeScoreBoard();
	
	while (exit == false)
	{
		printf("\tRock, Paper, Scissors\n");
		int tScorePlayer = 0; 
		int tScoreComputer = 0;
		
		for (int i = 0; i < 5; i++)
		{
			printf("%10s %d\n", "Round", i + 1);
			char playerOption = playerChoiceAsking();
			char computerOption = computerChoiceGeneration();
			scoreBoard[i] = calculatingScore(playerOption, computerOption);
			tScorePlayer += scoreBoard[i].player;
			tScoreComputer += scoreBoard[i].computer;
	
			displayRoundScores(tScorePlayer, tScoreComputer);
					
		}	
				
		if (tScorePlayer > tScoreComputer)
		{
			printf("\n\tCongratulations, You Won\a\n");
			
		}
		else if (tScorePlayer < tScoreComputer)
		{
			printf("\n\tYou lost!\n");
		}
		else
		{
			printf("\n\tIt's a draw!\n");
		}
		
		displayScoreBoard(tScorePlayer, tScoreComputer);
		
		if(playAgain() == 0)
		{
			exit = true;
		}
		clearScreen();		
	}
	return 0;
}

char playerChoiceAsking()
{
	char choice;
	bool isValidChoice = false;
	
	while (isValidChoice != true)
	{
		printf("Choose the option:\n");
		printf("R: Rock\n");
		printf("P: Paper\n");
		printf("S: Scissors\n");
		printf("Enter the option: ");
		scanf(" %c", &choice);
		choice = toupper(choice);
				
		switch (choice)
		{
			case 'R': 
				printf("You chose Rock\t|");
				isValidChoice = true;
				break;
			case 'P': 
				printf("You chose Paper\t|");
				isValidChoice = true;
				break;
			case 'S': 
				printf("You chose Scissors\t|");
				isValidChoice = true;
				break;
			default:
				isValidChoice = false;
				printf("Invalid Option!\n");
		}
	}
	return choice;
}
char computerChoiceGeneration()
{
	int computerChoice = 1 + rand() % 3;
	if(computerChoice == 1)
	{
		printf("  Computer chose Rock\n");
		return 'R';
	}
	else if(computerChoice == 2)
	{
		printf("  Computer chose Paper\n");
		return 'P';
	}
	else
	{
		printf("  Computer chose Scissors\n");
		return 'S';
	}	
}

struct Scores calculatingScore(char player, char computer)
{
	struct Scores score;
	if (player == computer)
	{
		score.computer = 0;
		score.player = 0;
	}
	else if((player == 'R' && computer == 'S') || (player == 'S' && computer == 'P') || (player == 'P' && computer == 'R'))
	{
		score.computer = 0;
		score.player = 1;		
	}
	else if((player == 'S' && computer == 'R') || (player == 'P' && computer == 'S') || (player == 'R' && computer == 'P'))
	{
		score.computer = 1;
		score.player = 0;		
	}
	return score;
}
void displayRoundScores(int roundScorePlayer, int roundScoreComputer)
{
	printf(" ____________________________\n");
	printf("|        |   You   | Computer|\n");
	printf("|________|_________|_________|\n");	
	printf("| Scores |    %d    |    %d    |\n", roundScorePlayer, roundScoreComputer);
	printf("|________|_________|_________|\n");				
}
void displayScoreBoard(int totalScorePlayer, int totalScoreComputer)
{
	printf("\t ____________________________\n");
	printf("\t|         Scoreboard         |\n");
	printf("\t|____________________________|\n");
	printf("\t|        |   You   | Computer|\n");
	printf("\t|________|_________|_________|\n");	
	
	for (int i = 1; i <= 5; i++)
	{
		printf("\t|Round %d |    %d    |    %d    |\n", i, scoreBoard[i - 1].player, scoreBoard[i - 1].computer);			
	}
	
	printf("\t|________|_________|_________|\n");		
	printf("\t| Total  |    %d    |    %d    |\n", totalScorePlayer, totalScoreComputer);
	printf("\t|________|_________|_________|\n");			
}
int playAgain()
{
	char continuePlaying;
	printf("Do you want to play again?(Y/N): ");
	scanf(" %c", &continuePlaying);
	continuePlaying = toupper(continuePlaying);
	if (continuePlaying == 'N')
	{
		printf("Thank you for playing!\n");
		return 0;
	}
	return 1;
}
void initializeScoreBoard()
{
	for (int i = 0; i < 5; i++)
	{
		scoreBoard[i].player = 0;
		scoreBoard[i].computer = 0;
	}
}
void clearScreen()
{
	system("cls");
}