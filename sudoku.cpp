#include <iostream>
using namespace std;

const int N = 9; // Kích thý?c c?a Sudoku

// Hàm in ra Sudoku
void printSudoku(int grid[N][N]) {
    for (int row = 0; row < N; row++) {
        for (int col = 0; col < N; col++) {
            cout << grid[row][col] << " ";
        }
        cout << endl;
    }
}

// Ki?m tra xem giá tr? num có th? ði?n vào ô (row, col) hay không
bool isSafe(int grid[N][N], int row, int col, int num) {
    // Ki?m tra c?t
    for (int x = 0; x < N; x++) {
        if (grid[x][col] == num) {
            return false;
        }
    }

    // Ki?m tra hàng
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

// Hàm gi?i Sudoku b?ng thu?t toán quay lui
bool solveSudoku(int grid[N][N]) {
    int row, col;

    // T?m ô tr?ng ð?u tiên
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

    // N?u không c?n ô tr?ng, Sudoku ð? ðý?c gi?i
    if (!isEmpty) {
        return true;
    }

    // Th? các giá tr? t? 1 ð?n 9 cho ô hi?n t?i
    for (int num = 1; num <= 9; num++) {
        if (isSafe(grid, row, col, num)) {
            // N?u giá tr? h?p l?, ði?n vào ô
            grid[row][col] = num;

            // Ð? quy ð? gi?i ti?p
            if (solveSudoku(grid)) {
                return true;
            }

            // N?u không th? gi?i ti?p v?i giá tr? hi?n t?i, quay lui
            grid[row][col] = 0;
        }
    }

    return false;
}

int main() {
    int grid[N][N];

    cout << "Nh?p giá tr? Sudoku (s? d?ng 0 cho ô tr?ng):\n";
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> grid[i][j];
        }
    }

    if (solveSudoku(grid)) {
        cout << "Sudoku ð? gi?i:\n";
        printSudoku(grid);
    } else {
        cout << "Không t?n t?i cách gi?i Sudoku.\n";
    }

    return 0;
}

