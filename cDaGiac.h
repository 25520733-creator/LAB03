#ifndef CDAGIAC_H
#define CDAGIAC_H

#include <iostream>
#include <cmath>
using namespace std;

class Diem {
public:
    double x, y;
    void Nhap() {
        cout << "Nhap x, y: "; cin >> x >> y;
    }
    void Xuat() const {
        cout << "(" << x << "," << y << ")";
    }
    double TinhKhoangCach(const Diem& other) const {
        return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
    }
};

class cDaGiac {
private:
    int n;          // Số đỉnh
    Diem ds[100];   // Mảng tĩnh chứa tối đa 100 đỉnh

public:
    void Nhap();
    void Xuat() const;
    void TinhTien(double dx, double dy);
    void PhongTo(double k);
    void ThuNho(double k);
    void Quay(double goc); // Goc tinh bang radian
};

#endif
