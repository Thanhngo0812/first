#include <iostream>
#include <cmath>

using namespace std;

void nhapM (int A[], int n);
int TBC (int A[], int n);

int main() {
    int n;
    do {
    cout << "Nhap so phan tu cua day so: ";
    cin >> n;
    if (n > 30000 || n <= 0) {
        cout << "\nQua nhieu hoac it phan tu, vui long nhap lai.\n";
        }
    }while(n > 30000);
    int A[n];

    nhapM(A, n);

    cout << "\nVay day nay co " << TBC(A, n) << " so trung binh cong";

    return 0;
}


void nhapM(int A[], int n) {
    for (int i = 0; i < n; i++){
        do {
            cout << "\nNhap phan tu thu " << i+1 << " cua day so: ";
            cin >> A[i];
            if (abs(A[i]) > 10000) {
                cout << "\nGia tri phan tu qua lon, vui long nhap lai.\n";
            }
        }
        while (abs(A[i]) > 10000);
    }
}


int TBC (int A[], int n) {
    int dem = 0;
    int trung = 0;
    for (int i = 0; i < n - 2; i++) {
        for (int j = i + 1; j < n - 1; j++) {
            for (int k = j + 1; k < n; k++) {
                float temp = (A[i] + A[j] + A[k]) / 3.0;
                for (int l = 0; l < n; l++) {
                    if (temp == A[l]) {
                        if (trung == temp) {                    //kiem tra xem so trung binh cong co bi trung khong
                            dem--;
                        }
                        dem++;
                        trung = temp;
                    }
                }
            }
        }
    }
    return dem;
}
