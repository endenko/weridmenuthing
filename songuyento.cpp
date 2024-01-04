#include <iostream>

using namespace std;

bool languyento(int n) {
    if (n <= 1) {
        return false;
    }
    if (n <= 3) {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int M, N;
    cin >> M >> N;

    bool songuyento = false;

    for (int n = M; n <= N; n++) {
        if (languyento(n)) {
            cout << n << endl;
            songuyento = true;
        }
    }

    if (!songuyento) {
        cout << "Absent" << endl;
    }
    return 0;
}
