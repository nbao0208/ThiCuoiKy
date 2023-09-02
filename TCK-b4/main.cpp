#include <iostream>
#include <cmath>

using namespace std;

void addToaDo(float a[2]);

void addBanKinh(float &a);

bool checkCatNhau(float a[2], float b[2], float, float);

int main() {
    float FirstCircle[2];
    float SecondCircle[2];
    float R1;
    float R2;
    cout << "Nhap toa do duong tron thu nhat" << endl;
    addToaDo(FirstCircle);
    cout << "Nhap ban kinh duong tron thu nhat: ";
    addBanKinh(R1);
    cout << "Nhap toa do duong tron thu hai" << endl;
    addToaDo(SecondCircle);
    cout << "Nhap ban kinh duong tron thu hai: ";
    addBanKinh(R2);
    if (checkCatNhau(FirstCircle, SecondCircle, R1, R2) == true) {
        cout << "Hai duong tron nay giao nhau";
    } else {
        cout << "Hai duong tron nay khong giao nhau";
    }
    return 0;
}

void addToaDo(float a[2]) {
    for (int i = 0; i < 2; ++i) {
        if (i == 0) {
            cout << "Nhap hoanh do: ";
            cin >> a[i];
        } else {
            cout << "Nhap tung do: ";
            cin >> a[i];
        }
    }
}

void addBanKinh(float &a) {
    cin >> a;
    while (a < 0) {
        cout << "Khong hop le, vui long nhap so duong: ";
        cin >> a;
    }
}

bool checkCatNhau(float a[2], float b[2], float r1, float r2) {
    float x = b[0] - a[0];
    float y = b[1] - a[1];
    float z = pow(r1, 2) - pow(r2, 2);
    float m = pow(a[0], 2) - pow(b[0], 2);
    float n = pow(a[1], 2) - pow(b[1], 2);
    float c = (z - m - n) / (2 * x);
    float d = y / x;
    float A = pow(d, 2) + 1;
    float B = -2 * d * (c - a[0]) - 2 * a[1];
    float C = pow(c - a[0], 2) + pow(a[1], 2) - pow(r1, 2);
    float delta = pow(B, 2) - 4 * A * C;
    if (delta >= 0) {
        return true;
    } else {
        return false;
    }
}
