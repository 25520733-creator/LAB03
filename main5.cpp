#include "cDaThuc.h"

int main() {
    cDaThuc p1, p2;

    cout << "--- Nhap P1 ---\n"; p1.Nhap();
    cout << "--- Nhap P2 ---\n"; p2.Nhap();

    cout << "\nP1 = "; p1.Xuat();
    cout << "P2 = "; p2.Xuat();

    double x;
    cout << "\nNhap x de tinh P1(x): "; cin >> x;
    cout << "Ket qua P1(" << x << ") = " << p1.TinhGiaTri(x) << endl;

    cDaThuc tong = p1.Cong(p2);
    cout << "P1 + P2 = "; tong.Xuat();

    cDaThuc hieu = p1.Tru(p2);
    cout << "P1 - P2 = "; hieu.Xuat();

    return 0;
}
