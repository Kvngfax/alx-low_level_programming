#include "main.h"

/**
* print_chessboard - prints the chessboard
* @a: pointer to pieces to print
*
* Return: void
* It takes the 2D array a as a parameter, representing the chessboard,
* where each element a[i][j] is a character representing a chess piece
*
* The function uses two nested loops (for loops) to traverse the 2D array
* The outer loop (i loop) iterates over the rows of the chessboard 
* (from i = 0 to i < 8),
* and the inner loop (j loop) iterates over the columns
* of the chessboard (from j = 0 to j < 8).
*
* Inside the inner loop, the _putchar function is used
* to print the character at position a[i][j],
* which represents the chess piece at row i and column j
*
* After printing all the characters in a row, the _putchar('\n')
* is used to move to the next line,
* effectively printing each row on a separate line,
* which gives the appearance of a chessboard.
*/
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}
