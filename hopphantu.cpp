#include <iostream>
#include <vector>

void UnionArrays(int m, int A[], int n, int B[], int C[]) {
    int k = 0;

    // Sao chép t?t c? các ph?n t? c?a t?p h?p A vào t?p h?p C
    for (int i = 0; i < m; i++) {
        C[k] = A[i];
        k++;
    }

    // Thêm các ph?n t? c?a t?p h?p B vào t?p h?p C n?u chýa t?n t?i
    for (int i = 0; i < n; i++) {
        bool exists = false;
        for (int j = 0; j < k; j++) {
            if (B[i] == C[j]) {
                exists = true;
                break;
            }
        }
        if (!exists) {
            C[k] = B[i];
            k++;
        }
    }
}

void PrintArray(int size, int arr[]) {
    for (int i = 0; i < size; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int m, n;
    std::cout << "Nhap so phan tu cua tap A: ";
    std::cin >> m;
    int A[m];
    std::cout << "Nhap cac phan tu cua tap A:\n";
    for (int i = 0; i < m; i++) {
        std::cin >> A[i];
    }

    std::cout << "Nhap so phan tu cua tap B: ";
    std::cin >> n;
    int B[n];
    std::cout << "Nhap cac phan tu cua tap B:\n";
    for (int i = 0; i < n; i++) {
        std::cin >> B[i];
    }

    int C[m + n]; // T?o m?t m?ng ð? lýu tr? h?p c?a A và B

    UnionArrays(m, A, n, B, C);

    std::cout << "H?p c?a hai t?p A và B: ";
    PrintArray(m + n, C);

    return 0;
}

