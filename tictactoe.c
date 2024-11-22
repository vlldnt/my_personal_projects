#include <stdio.h>

void show_board(char board[3][3]) 
{
    printf(" %c | %c | %c \n", board[0][0], board[0][1], board[0][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[1][0], board[1][1], board[1][2]);
    printf("---+---+---\n");
    printf(" %c | %c | %c \n", board[2][0], board[2][1], board[2][2]);
}

int game_turn(int player)
{
	int pos;
	player = 1;
	signX = 'X';
	signO = 'O';
	int li, row;

	printf("Player %d what if your position ? (1 to 9) ?");
	scanf("%d", &pos);

	if (pos > 1 && pos < 9)
	{
		if (pos == 1)
			board[0][0] = signX;
		if (pos == 2)
			board[0][1] = signX;
	}
	else 
		printf("Choose a place between 1 and 9.");
}

int main() 
{
	int turn ;

	//initialise a zero la board
	char grille[3][3] = {
		{' ', ' ', ' '},
		{' ', ' ', ' '},
		{' ', ' ', ' '}
	};
	

	for (turn = 1; turn <= 9; turn++)
	{
		show_board(grille);

	}


}
