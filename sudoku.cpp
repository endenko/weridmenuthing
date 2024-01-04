#include <iostream>
using namespace std;

const int N = 9; // K�ch th�?c c?a Sudoku

// H�m in ra Sudoku
void printSudoku(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
}

// Ki?m tra xem gi� tr? num c� th? �i?n v�o � (row, col) hay kh�ng
bool isSafe(int grid[N][N], int row, int col, int num) {
    // Ki?m tra c?t
    for (int x = 0; x < N; x++) {
        if (grid[x][col] == num) {
            return false;
        }
    }

    // Ki?m tra h�ng
    for (int y = 0; y < N; y++) {
        if (grid[row][y] == num) {
            return false;
        }
    }

    // Ki?m tra trong 3x3 subgrid
    int startRow = row - row % 3;
    int startCol = col - col % 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (grid[i + startRow][j + startCol] == num) {
                return false;
            }
        }
    }

    return true;
}

// H�m gi?i Sudoku b?ng thu?t to�n quay lui
bool solveSudoku(int grid[N][N]) {
    int row, col;

    // T?m � tr?ng �?u ti�n
    bool isEmpty = false;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            if (grid[row][col] == 0) {
                isEmpty = true;
                break;
            }
        }
        if (isEmpty) {
            break;
        }
    }

    // N?u kh�ng c?n � tr?ng, Sudoku �? ��?c gi?i
    if (!isEmpty) {
        return true;
    }

    // Th? c�c gi� tr? t? 1 �?n 9 cho � hi?n t?i
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            // N?u gi� tr? h?p l?, �i?n v�o �
            grid[row][col] = num;

            // �? quy �? gi?i ti?p
            if (solveSudoku(grid)) {
                return true;
            }

            // N?u kh�ng th? gi?i ti?p v?i gi� tr? hi?n t?i, quay lui
            grid[row][col] = 0;
        }
    }

    return false;
}

int main() {
    int grid[N][N];

    cout << "Nh?p gi� tr? Sudoku (s? d?ng 0 cho � tr?ng):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    if (solveSudoku(grid)) {
        cout << "Sudoku �? gi?i:\n";
        printSudoku(grid);
    } else {
        cout << "Kh�ng t?n t?i c�ch gi?i Sudoku.\n";
    }

    return 0;
}

