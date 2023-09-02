#include <iostream>

using namespace std;

void addSize(int &n);

//void addMang(int N, int a[N][N]);

//int findMaxAtDong( int N, int ,int a[][N]);
//int findMinAtColumn (int N, int, int a[][N] );
//void printSuggestedNum(int N, int a[][N]);
int main() {
    int n;
    addSize(n);
    const int N = n;
    int matrix[N][N];
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            cout << "Nhap phan tu tai dong " << i << " cot " << j << " : ";
            cin >> matrix[i][j];
        }
    }
    cout << "Cac phan tu thoa man yeu cau de bai la: " << endl;
    for (int i = 0; i < N; i++) {
        int max = matrix[i][0];
        int index;
        for (int j = 1; j < N; j++) {
            if (matrix[i][j] >= max) {
                max = matrix[i][j];
                index = j;
            }
        }
        int min = matrix[0][index];
        for (int j = 1; j < N; ++j) {
            if (matrix[i][index] <= min) {
                min = matrix[i][index];
            }
        }
        if (max == min) {
            cout << "So " << max << " tai dong " << i << " cot " << index << endl;
        }
    }
    return 0;
}

void addSize(int &n) {
    cout << "Nhap kich thuoc cua ma tran vuong: ";
    cin >> n;
    while (n < 0) {
        cout << "Khong hop le, vui long nhap so nguyen duong: ";
        cin >> n;
    }
}
//void addMang(int N, int a[N][N]){
//
//}
//int findMaxAtDong(int N, int Dong, int a[][N]){
//    int max = a[Dong][0];
//    for (int i = 1; i < N; i++) {
//        if (a[Dong][i]>=max){
//            max=a[Dong][i];
//        }
//    }
//    return max;
//}
//int findMinAtColumn(int N, int column, int a[][N]){
//    int min = a[0][column];
//    for (int i = 1; i < N ; i++) {
//        if (a[i][column]<min){
//            min = a[i][column];
//        }
//    }
//    return min;
//}
//void printSuggestedNum(int N, int a[][N]){
//
//}
