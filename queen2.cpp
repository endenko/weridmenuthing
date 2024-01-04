#include <iostream>
#include <vector>

using namespace std;

bool isSafe(vector<vector<int> >& board, int row, int col) {
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }
    for (int i = row, j = col; i >= 0 && j < board.size(); i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}

bool solveNQueens(vector<vector<int> >& board, int row) {
    // Base case: all queens are placed
    if (row == board.size()) {
        return true;
    }

    for (int col = 0; col < board.size(); col++) {
        if (isSafe(board, row, col)) {
            // Place the queen at (row, col)
            board[row][col] = 1;

            // Recursively solve for the next row
            if (solveNQueens(board, row + 1)) {
                return true;
            }

            // Backtrack: remove the queen from (row, col)
            board[row][col] = 0;
        }
    }

    return false;
}

void printBoard(vector<vector<int> >& board) {
    for (int i = 0; i < board.size(); i++) {
        for (int j = 0; j < board.size(); j++) {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int n = 8;
    vector<vector<int> > board(n, vector<int>(n, 0));

    if (solveNQueens(board, 0)) {
        printBoard(board);
    } else {
        cout << "No solution exists!" << endl;
    }
    return 0;
}
