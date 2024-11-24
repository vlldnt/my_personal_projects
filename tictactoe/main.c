#include <stdio.h>

//show the board at start and before and after  every turn
int show_board (char *board[9])
{
	int i, j;
	int pos = 0;

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			if (pos == 2 || pos == 5 || pos == 8)
			{
				if (pos == 8)
				{
					printf(" %s ", board[pos]);
				}
				else
				{
					printf(" %s \n---+---+---", board[pos]);
					pos++;
				}
			}
			else
			{
				printf(" %s |", board[pos]);
				pos++;
			}
		}
	putchar('\n');
	}
return (0);
}

// PLayer turn
int player_turn(char *grid_turn[9])
{
	int player;
	int position;
	char *symb;
	
	// Change player each turn
	if (player == 1)
		player = 2;
	else 
		player = 1;

	// Change symbol depending player number
	symb = (player == 1) ? "X" : "O";

	printf("Player %d, choose your position (1 to 9)\n", player);
	scanf("%d", &position);

	//Verifiying the case empty of not
	if (*grid_turn[position] != ' ')
	{
		printf("Already used, change the position !\n");
		return (0);
	}
	
	// position - 1 (because of the array starting from 0 to 8)
	grid_turn[position - 1] = symb;
	printf("Player %d, has chosen the position n°%d\n", player, position);
	
	//print the board updated
	show_board(grid_turn);
}

/* Chech for win or tie 
void check(int);
{

}*/


// main function for the TictacToe Game
int main(void)
{
	char *grid[9] = {" ", " ", " ", " ", " ", " ", " ", " ", " "};
	
	//First show the empty board (filled with grid déclared first)
	show_board(grid);

	// 9 turns maximum
	for (int i = 0; i < 9; i++)
		player_turn(grid);
	printf("Game over\n");

return (0);
}
