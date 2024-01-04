#include <iostream>
#include <vector>
#include <cmath> 
using namespace std;
int N = 8;
bool isSafe(vector<int>& board, int row, int col) {
    for (int i = 0; i < col; i++) {
        if (board[i] == row || abs(board[i] - row) == abs(i - col)) {
            return false;
        }
    }
    return true;
}
void solveNQueens(vector<int>& board, int col) {
    if (col == N) {
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) {
                if (board[j] == i) {
                    cout << "Q ";
                } else {
                    cout << ". ";
                }
            }
            cout << endl;
        }
        cout << "---------------------" << endl;
        return;
    }
    for (int row = 0; row < N; row++) {
        if (isSafe(board, row, col)) {
            board[col] = row;
            solveNQueens(board, col + 1);
            board[col] = -1;
        }
    }
}
int main() {
    vector<int> board(N, -1); 
    solveNQueens(board, 0); 
    return 0;
}

