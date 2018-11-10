#define _CRT_SECURE_NO_WARNINGS
#ifndef __CHESS_H__
#define __CHESS_H__

#include<stdio.h>
#include<time.h>
#include<Windows.h>

#define ROWS 3
#define COLS 3

void show_board(char board[ROWS][COLS], int rows, int cols);
void init_board(char board[ROWS][COLS], int rows, int cols);
void computer_move(char board[ROWS][COLS], int rows, int cols);
void player_move(char board[ROWS][COLS], int rows, int cols);
char check_win(char board[ROWS][COLS], int rows, int cols);

# endif//__CHESS_H__


void show_board(char board[ROWS][COLS], int rows, int cols)
{
	int i;
	for (int i = 0; i < rows; i++)
	{
		printf("  %c | %c | %c  \n", board[i][0], board[i][1], board[i][2]);
		if (i != rows - 1)
			printf(" ---|---|--- \n");
	}
}

void init_board(char board[ROWS][COLS], int rows, int cols)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void computer_move(char board[ROWS][COLS], int rows, int cols)
{
	int x, y, i;
	printf("Compter's turn to move:\n");
	while (1)
	{
		x = rand() % rows;
		y = rand() % cols;
		for (i = 0; i < rows; i++)
		{
			if (board[i][0] == board[i][1] && board[i][0] == 'X' && board[i][2] == ' ')
			{
				board[i][2] = 'X';
				goto flag1;
			}
			else if (board[i][1] == board[i][2] && board[i][1] == 'X' && board[i][0] == ' ')
			{
				board[i][0] = 'X';
				goto flag1;
			}
			else if (board[i][0] == board[i][2] && board[i][2] == 'X' && board[i][1] == ' ')
			{
				board[i][1] = 'X';
				goto flag1;
			}
			else if (board[0][i] == board[1][i] && board[0][i] == 'X' && board[2][i] == ' ')
			{
				board[2][i] = 'X';
				goto flag1;
			}
			else if (board[1][i] == board[2][i] && board[1][i] == 'X' && board[0][i] == ' ')
			{
				board[0][i] = 'X';
				goto flag1;
			}
			else if (board[0][i] == board[2][i] && board[2][i] == 'X' && board[1][i] == ' ')
			{
				board[1][i] = 'X';
				goto flag1;
			}
			else if (board[0][0] == board[1][1] && board[0][0] == 'X' && board[2][2] == ' ')
			{
				board[2][2] = 'X';
				goto flag1;
			}
			else if (board[1][1] == board[2][2] && board[1][1] == 'X' && board[0][0] == ' ')
			{
				board[0][0] = 'X';
				goto flag1;
			}
			else if (board[0][0] == board[2][2] && board[0][0] == 'X' && board[1][1] == ' ')
			{
				board[1][1] = 'X';
				goto flag1;
			}
			else if (board[0][2] == board[1][1] && board[1][1] == 'X' && board[2][0] == ' ')
			{
				board[2][0] = 'X';
				goto flag1;
			}
			else if (board[1][1] == board[2][0] && board[1][1] == 'X' && board[0][2] == ' ')
			{
				board[0][2] = 'X';
				goto flag1;
			}
			else if (board[2][0] == board[0][2] && board[2][0] == 'X' && board[1][1] == ' ')
			{
				board[1][1] = 'X';
				goto flag1;
			}
		}
		for (i = 0; i < rows; i++)
		{
			if (board[i][0] == board[i][1] && board[i][0] == 'O' && board[i][2] == ' ')
			{
				board[i][2] = 'X';
				goto flag1;
			}
			else if (board[i][1] == board[i][2] && board[i][1] == 'O' && board[i][0] == ' ')
			{
				board[i][0] = 'X';
				goto flag1;
			}
			else if (board[i][0] == board[i][2] && board[i][2] == 'O' && board[i][1] == ' ')
			{
				board[i][1] = 'X';
				goto flag1;
			}
			else if (board[0][i] == board[1][i] && board[0][i] == 'O' && board[2][i] == ' ')
			{
				board[2][i] = 'X';
				goto flag1;
			}
			else if (board[1][i] == board[2][i] && board[1][i] == 'O' && board[0][i] == ' ')
			{
				board[0][i] = 'X';
				goto flag1;
			}
			else if (board[0][i] == board[2][i] && board[2][i] == 'O' && board[1][i] == ' ')
			{
				board[1][i] = 'X';
				goto flag1;
			}
			else if (board[0][0] == board[1][1] && board[0][0] == 'O' && board[2][2] == ' ')
			{
				board[2][2] = 'X';
				goto flag1;
			}
			else if (board[1][1] == board[2][2] && board[1][1] == 'O' && board[0][0] == ' ')
			{
				board[0][0] = 'X';
				goto flag1;
			}
			else if (board[0][0] == board[2][2] && board[0][0] == 'O' && board[1][1] == ' ')
			{
				board[1][1] = 'X';
				goto flag1;
			}
			else if (board[0][2] == board[1][1] && board[1][1] == 'O' && board[2][0] == ' ')
			{
				board[2][0] = 'X';
				goto flag1;
			}
			else if (board[1][1] == board[2][0] && board[1][1] == 'O' && board[0][2] == ' ')
			{
				board[0][2] = 'X';
				goto flag1;
			}
			else if (board[2][0] == board[0][2] && board[2][0] == 'O' && board[1][1] == ' ')
			{
				board[1][1] = 'X';
				goto flag1;
			}
		}
		if (board[x][y] == ' ')
		{
			board[x][y] = 'X';
			goto flag1;
		}
	}
flag1:;
}

void player_move(char board[ROWS][COLS], int rows, int cols)
{
	int x, y;
	printf("Player's turn to move:\n");
	while (1)
	{
		printf("Input x and y(like x y):\n");
		scanf("%d %d", &x, &y);
		if (x >= 1 && x <= rows && y >= 1 && y <= cols)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = 'O';
				break;
			}
			else printf("The location has been taken!Please try again.\n");
		}
		else printf(" Input error!Please try again.\n");
	}
}

static int is_full(char board[ROWS][COLS], int rows, int cols)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}

char check_win(char board[ROWS][COLS], int rows, int cols)
{
	int i;
	for (i = 0; i < rows; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (i = 0; i < cols; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	else if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[1][1] != ' ')
		return board[1][1];
	else if (is_full(board, rows, cols))
		return 'q';
	return 0;
}

void menu()
{
	printf("***************************************\n");
	printf("*      1.play             0.exit      *\n");
	printf("***************************************\n");
}
void first_move()
{
	printf("***************************************\n");
	printf("*  1.computer first   2.player first  *\n");
	printf("***************************************\n");
}
void game()
{
	int choice_1, win;
	char board[ROWS][COLS];
	init_board(board, ROWS, COLS);
	first_move();
flag:
	printf("Input your choice;");
	scanf("%d", &choice_1);
	switch (choice_1)
	{
	case 1:
		do
		{
			computer_move(board, ROWS, COLS);
			show_board(board, ROWS, COLS);
			win = check_win(board, ROWS, COLS);
			if (win != 0)
				break;
			player_move(board, ROWS, COLS);
			show_board(board, ROWS, COLS);
			win = check_win(board, ROWS, COLS);
		} while (win == 0);
		if (win == 'X')
			printf("You lose!Good luck next time!\n");
		if (win == 'O')
			printf("You win!Congratulations!\n");
		if (win == 'q')
			printf("The score was tied!Good luck next time!\n");
		break;
	case 2:
		do
		{
			show_board(board, ROWS, COLS);
			player_move(board, ROWS, COLS);
			show_board(board, ROWS, COLS);
			win = check_win(board, ROWS, COLS);
			if (win != 0)
				break;
			computer_move(board, ROWS, COLS);
			win = check_win(board, ROWS, COLS);
		} while (win == 0);
		if (win == 'X')
			printf("You lose!Good luck next time!\n");
		if (win == 'O')
			printf("You win!Congratulations!\n");
		if (win == 'q')
			printf("The score was tied!Good luck next time!\n");
		break;
	default:
		printf(" Input error!Please try again.\n");
		goto flag;
	}
}
int main()
{
	int choice;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("Input your choice:");
		scanf("%d", &choice);
		switch (choice)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf(" Input error!Please try again.\n");
			break;
		}
	} while (choice);
	return 0;
}