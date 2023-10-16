// Include necessary libraries
#include <stdio.h>   // For standard input and output
#include <stdbool.h> // For boolean data type
#include <stdlib.h>  // For random number generation
#include <time.h>    // To seed the random number generator

// Define constants for the game settings
#define BOARD_SIZE 8  // Standard checkers board size
#define EMPTY ' '     // Empty square representation
#define PLAYER1 'O'   // Player 1 piece representation
#define PLAYER2 'X'   // Player 2 piece representation

// Declare the game board
char board[BOARD_SIZE][BOARD_SIZE];

// Struct to hold a move's details
typedef struct {
    int fromRow;
    int fromCol;
    int toRow;
    int toCol;
} Move;

// Initialize the board to its starting state
void initializeBoard() {
    // Loop through each square of the board
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            // Set pieces on alternating squares
            if (i % 2 != j % 2) {
                if (i < 3) {  // Initial position for Player 1 pieces
                    board[i][j] = PLAYER1;
                }
                else if (i > 4) {  // Initial position for Player 2 pieces
                    board[i][j] = PLAYER2;
                }
                else {  // Middle rows are empty
                    board[i][j] = EMPTY;
                }
            }
            else {  // The remaining squares are empty
                board[i][j] = EMPTY;
            }
        }
    }
}

// Display the current state of the board
void displayBoard() {
    printf("  ");
    for (int j = 0; j < BOARD_SIZE; j++) {
        printf("%d ", j);
    }
    printf("\n");

    for (int i = 0; i < BOARD_SIZE; i++) {
        printf("%d ", i);
        for (int j = 0; j < BOARD_SIZE; j++) {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
}

// Function to make a move on the board
bool makeMove(char player, int fromRow, int fromCol, int toRow, int toCol) {
    // Check for valid move conditions
    if (board[fromRow][fromCol] != player) return false;
    if (board[toRow][toCol] != EMPTY) return false;
    if (abs(fromRow - toRow) != 1 || abs(fromCol - toCol) != 1) return false;

    // Make the move
    board[fromRow][fromCol] = EMPTY;
    board[toRow][toCol] = player;

    return true;  // Move was successful
}

// Function to let the AI make a move
void aiMove() {
    while (true) {
        int fromRow = rand() % BOARD_SIZE;
        int fromCol = rand() % BOARD_SIZE;
        int toRow = fromRow + (rand() % 2 == 0 ? 1 : -1);
        int toCol = fromCol + (rand() % 2 == 0 ? 1 : -1);
        // Keep trying random moves until a valid one is found
        if (makeMove(PLAYER2, fromRow, fromCol, toRow, toCol)) break;
    }
}

// Function to list all available moves for a player
int listAvailableMoves(char player, Move moves[]) {
    int count = 0;
    for (int i = 0; i < BOARD_SIZE; i++) {
        for (int j = 0; j < BOARD_SIZE; j++) {
            if (board[i][j] == player) {
                int direction = (player == PLAYER1) ? 1 : -1;  // Movement direction based on player
                if (i + direction >= 0 && i + direction < BOARD_SIZE) {
                    if (j - 1 >= 0 && board[i + direction][j - 1] == EMPTY) {
                        // Save this as a valid move
                        moves[count].fromRow = i;
                        moves[count].fromCol = j;
                        moves[count].toRow = i + direction;
                        moves[count].toCol = j - 1;
                        count++;
                    }
                    if (j + 1 < BOARD_SIZE && board[i + direction][j + 1] == EMPTY) {
                        // Save this as a valid move
                        moves[count].fromRow = i;
                        moves[count].fromCol = j;
                        moves[count].toRow = i + direction;
                        moves[count].toCol = j + 1;
                        count++;
                    }
                }
            }
        }
    }
    return count;  // Number of available moves
}

// Main function where the game logic resides
int main() {
    // Seed the random number generator
    srand(time(NULL));

    printf("Welcome to Checkers!\n\n");
    printf("Instructions:\n");
    printf("- The board is an 8x8 grid, where Player 1 pieces are represented by 'O' and Player 2 (or AI) pieces by 'X'.\n");
    printf("- Players can move their pieces diagonally one square.\n");
    printf("- To make a move, select the move number from the available list.\n");
    printf("- Your goal is to navigate your pieces to the opponent's side of the board.\n");
    printf("- For simplicity, capturing opponent pieces is not implemented in this version.\n");
    printf("Choose mode:\n1. Player vs Player (PvP)\n2. Player vs AI (PvAI)\n");
    int choice;
    scanf_s("%d", &choice);  // Use scanf_s for secure input
    while (choice != 1 && choice != 2) {
        printf("Invalid choice. Please select either 1 or 2.\n");
        scanf_s("%d", &choice);
    }

    // Initialize the board to its default state
    initializeBoard();

    char currentPlayer = PLAYER1;
    Move availableMoves[BOARD_SIZE * BOARD_SIZE];  // Array to hold all potential moves

    // Main game loop
    while (true) {
        displayBoard();

        // Handle player's move
        if (currentPlayer == PLAYER1 || choice == 1) {
            printf("Player %c's turn\n", currentPlayer);

            int moveCount = listAvailableMoves(currentPlayer, availableMoves);
            if (moveCount == 0) {
                printf("No available moves for Player %c. Game Over.\n", currentPlayer);
                break;  // Exit the game loop if no moves available
            }

            printf("Available moves:\n");
            for (int i = 0; i < moveCount; i++) {
                printf("%d. (%d, %d) -> (%d, %d)\n", i + 1, availableMoves[i].fromRow, availableMoves[i].fromCol, availableMoves[i].toRow, availableMoves[i].toCol);
            }

            printf("Select a move (1-%d): ", moveCount);

            int moveSelection;
            scanf_s("%d", &moveSelection);
            while (moveSelection < 1 || moveSelection > moveCount) {
                printf("Invalid choice. Select a move (1-%d): ", moveCount);
                scanf_s("%d", &moveSelection);
            }

            Move selectedMove = availableMoves[moveSelection - 1];
            // Try making the move
            if (makeMove(currentPlayer, selectedMove.fromRow, selectedMove.fromCol, selectedMove.toRow, selectedMove.toCol)) {
                currentPlayer = (currentPlayer == PLAYER1) ? PLAYER2 : PLAYER1;  // Switch to the other player
            }
            else {
                printf("Error making the move! Try again.\n");
            }
        }
        else {  // Handle AI's move
            aiMove();
            currentPlayer = PLAYER1;
        }
    }

    printf("Thank you for playing Checkers!\n");
    return 0;  // Exit the program
}

