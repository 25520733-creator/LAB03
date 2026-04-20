#ifndef CDATHUC_H
#define CDATHUC_H

#include <iostream>
#include <cmath>
using namespace std;

class cDaThuc {
private:
    int n;          // Bậc của đa thức
    double a[100];  // Mảng tĩnh chứa hệ số (tối đa bậc 99)

public:
    cDaThuc(int bac = 0);
    void Nhap();
    void Xuat() const;
    double TinhGiaTri(double x) const;

    cDaThuc Cong(const cDaThuc& k) const;
    cDaThuc Tru(const cDaThuc& k) const;
};

#endif
