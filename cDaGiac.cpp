#include "cDaGiac.h"

void cDaGiac::Nhap() {
    do {
        cout << "Nhap so dinh cua da giac (n > 2): ";
        cin >> n;
    } while (n <= 2);

    for (int i = 0; i < n; i++) {
        cout << "Nhap toa do dinh " << i + 1 << ": ";
        ds[i].Nhap();
    }
}

void cDaGiac::Xuat() const {
    cout << "Da giac co " << n << " dinh: ";
    for (int i = 0; i < n; i++) {
        ds[i].Xuat();
        if (i < n - 1) cout << " -> ";
    }
    cout << endl;
}

void cDaGiac::TinhTien(double dx, double dy) {
    for (int i = 0; i < n; i++) {
        ds[i].x += dx;
        ds[i].y += dy;
    }
}

void cDaGiac::PhongTo(double k) {
    for (int i = 0; i < n; i++) {
        ds[i].x *= k;
        ds[i].y *= k;
    }
}

void cDaGiac::ThuNho(double k) {
    if (k != 0) PhongTo(1.0 / k);
}

void cDaGiac::Quay(double gocDo) {
    // Định nghĩa số PI
    const double PI = 3.14;

    // Chuyển đổi từ Độ sang Radian
    double gocRad = gocDo * (PI / 180.0);

    for (int i = 0; i < n; i++) {
        double x_old = ds[i].x;
        double y_old = ds[i].y;

        // Áp dụng công thức quay với gocRad
        ds[i].x = x_old * cos(gocRad) - y_old * sin(gocRad);
        ds[i].y = x_old * sin(gocRad) + y_old * cos(gocRad);
    }
}
