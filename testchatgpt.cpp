#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int matrix[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    int s = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
            s+= matrix[i][j];
        }
    }

    cout <<s<< endl;

    return 0;
}






