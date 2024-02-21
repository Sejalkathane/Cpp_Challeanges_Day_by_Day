#include <stdio.h>
#include <stdbool.h>

#define MAX_SIZE 15

int R, C;
int maze[MAX_SIZE][MAX_SIZE];
int visited[MAX_SIZE][MAX_SIZE];

// Function to check if a given position is valid in the maze
bool isValid(int row, int col) {
    return row >= 0 && row < R && col >= 0 && col < C;
}

// Function to find the shortest path in the maze
int findShortestPath(int startRow, int startCol, int targetRow, int targetCol, int remaining2Blocks) {
    if (!isValid(startRow, startCol) || !isValid(targetRow, targetCol) || maze[startRow][startCol] == 1)
        return -1; // Invalid input or starting block is blocked

    if (startRow == targetRow && startCol == targetCol)
        return 0; // Already at the target block

    if (visited[startRow][startCol] == 1 || maze[startRow][startCol] == 3)
        return -1; // Already visited or dangerous block

    visited[startRow][startCol] = 1;

    // Define possible moves: up, down, left, right
    int rowMoves[] = {-1, 1, 0, 0};
    int colMoves[] = {0, 0, -1, 1};

    int shortestPath = -1;

    for (int i = 0; i < 4; i++) {
        int newRow = startRow + rowMoves[i];
        int newCol = startCol + colMoves[i];

        if (isValid(newRow, newCol) && maze[newRow][newCol] != 1) {
            int path = findShortestPath(newRow, newCol, targetRow, targetCol, remaining2Blocks);

            if (path != -1) {
                if (maze[newRow][newCol] == 2) {
                    remaining2Blocks--;
                    if (remaining2Blocks < 0) {
                        visited[startRow][startCol] = 0;
                        return -1; // More than 2 blocks with value 2 encountered
                    }
                }

                if (shortestPath == -1 || path + 1 < shortestPath) {
                    shortestPath = path + 1;
                }
            }
        }
    }

    visited[startRow][startCol] = 0;
    return shortestPath;
}

int main() {
    // Input
    scanf("%d %d", &R, &C);

    for (int i = 0; i < R; i++) {
        for (int j = 0; j < C; j++) {
            scanf("%d", &maze[i][j]);
            visited[i][j] = 0;
        }
    }

    int startRow, startCol, targetRow, targetCol;
    scanf("%d %d", &startRow, &startCol);
    scanf("%d %d", &targetRow, &targetCol);

    // Find and print the result
    int result = findShortestPath(startRow, startCol, targetRow, targetCol, 2);

    if (result == -1) {
        printf("STUCK\n");
    } else {
        printf("%d\n", result);
    }

    return 0;
}
