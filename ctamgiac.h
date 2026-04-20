#include <bits/stdc++.h>
#include <cmath>



struct diem {
    double x, y;
};

class ctamgiac {
private:
    diem a, b, c;

public:
    ctamgiac();
    void nhap();
    void xuat();
    double dodai(diem p1, diem p2);
    double chuvi();
    double dientich();
    void check();
    void tinhtien(double k, double h);
    void phongto(double k);
    void thunho(double k);
    void quay(double goc);
};
