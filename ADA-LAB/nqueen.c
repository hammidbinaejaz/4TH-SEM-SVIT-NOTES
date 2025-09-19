#include <stdio.h>
#include <stdbool.h>

#define N 8

int board[N][N];  // 8x8 board initialized to 0

// Function to print the board
void printBoard() 
{
    for (int i = 0; i < N; i++) 
    {
        for (int j = 0; j < N; j++) 
        {
            printf("%d ", board[i][j]);
        }
        printf("\n");
    }
    printf("\n");
}

// Check if it's safe to place a queen at board[row][col]
bool isSafe(int row, int col) 
{
    // Check this row on the left
    for (int i = 0; i < col; i++) 
    {
        if (board[row][i])
            return false;
    }

    // Check upper-left diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) 
    {
        if (board[i][j])
            return false;
    }

    // Check lower-left diagonal
    for (int i = row, j = col; i < N && j >= 0; i++, j--) 
    {
        if (board[i][j])
            return false;
    }

    return true;
}

// Solve N-Queens using backtracking
bool solve(int col) 
{
    if (col == N) {
        printBoard();  // Solution found
        return true;   // Change this to false if you want *all* solutions
    }

    for (int row = 0; row < N; row++) 
    {
        if (isSafe(row, col)) 
        {
            board[row][col] = 1;  // Place queen

            if (solve(col + 1))   // Recur for next column
                return true;

            board[row][col] = 0;  // Backtrack
        }
    }

    return false;
}

// Main function
int main() {
    if (!solve(0)) {
        printf("No solution found.\n");
    }
    return 0;
}
