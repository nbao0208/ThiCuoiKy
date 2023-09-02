#include <iostream>
#include <string>

using namespace std;

string transformNumToString(int);

void addNum(int &n);

int main() {
    int num;
    addNum(num);
    cout << num << " sau khi chuyen thanh chuoi ky tu la: " << transformNumToString(num);
    return 0;
}

void addNum(int &n) {
    cout << "Nhap vao so nguyen n: ";
    cin >> n;
}

string transformNumToString(int n) {
    return to_string(n);
}
