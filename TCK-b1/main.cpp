#include <iostream>

using namespace std;

void addNum(int &a);

int main() {
    int n;
    addNum(n);
    int const N = n;
    int SuggestMatrix[N][(2 * N) - 1];
    for (int i = n - 1; i < (2 * n) - 1; i++) {
        for (int j = 0; j < n; j++) {
            SuggestMatrix[j][i] = n - j;
        }
    }

    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n; j++) {
            SuggestMatrix[j][i] = n - j;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < (2 * n) - 1; j++) {
            cout << SuggestMatrix[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

void addNum(int &a) {
    cout << "Nhap so nguyen duong: ";
    cin >> a;
    while (a <= 0) {
        cout << "Khong hop le, vui long nhap so nguyen duong: ";
        cin >> a;
    }
}


