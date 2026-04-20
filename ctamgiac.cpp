#include "ctamgiac.h"
using namespace std;

ctamgiac::ctamgiac() {}

void ctamgiac::nhap() {
    cin >> a.x >> a.y >> b.x >> b.y >> c.x >> c.y;
}

void ctamgiac::xuat() {
    cout << "(" << a.x << ";" << a.y << ")" << "(" << b.x << ";" << b.y << ")" << "(" << c.x << ";" << c.y << ")";
}

double ctamgiac::dodai(diem p1, diem p2) {
    return sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));
}

double ctamgiac::chuvi() {
    return dodai(a, b) + dodai(b, c) + dodai(a, c);
}

double ctamgiac::dientich() {
    double p=(chuvi())/2;

        return sqrt(p*(p-dodai(a,b))*(p-dodai(b,c))*(p-dodai(a,c)));
}

void ctamgiac::tinhtien(double k, double h) {
    a.x += k; b.x += k; c.x += k;
    a.y += h; b.y += h; c.y += h;
    cout << "tam giac sau khi tinh tien: ";
    xuat();
}

void ctamgiac::check() {
    double x = dodai(a, b), y = dodai(b, c), z = dodai(a, c);
    double eps = 1e-9;

    bool deu = (abs(x - y) < eps && abs(y - z) < eps);
    bool can = (abs(x - y) < eps || abs(y - z) < eps || abs(x - z) < eps);
    bool vuong = (abs(x * x + y * y - z * z) < eps || abs(y * y + z * z - x * x) < eps || abs(x * x + z * z - y * y) < eps);

    if (deu) cout << "\nday la tam giac deu";
    else if (vuong && can) cout << "\nday la tam giac vuong can";
    else if (vuong) cout << "\nday la tam giac vuong";
    else if (can) cout << "\nday la tam giac can";
    else cout << "\nday la tam giac thuong";
}

void ctamgiac::phongto(double k) {
    a.x *= k; b.x *= k; c.x *= k;
    a.y *= k; b.y *= k; c.y *= k;
    xuat();
}

void ctamgiac::thunho(double k) {
    if (k != 0) phongto(1.0 / k);
}

void ctamgiac::quay(double goc) {
    double rad = goc * M_PI / 180.0;
    double cos_g = cos(rad);
    double sin_g = sin(rad);

    double x_old;
    x_old = a.x; a.x = x_old * cos_g - a.y * sin_g; a.y = x_old * sin_g + a.y * cos_g;
    x_old = b.x; b.x = x_old * cos_g - b.y * sin_g; b.y = x_old * sin_g + b.y * cos_g;
    x_old = c.x; c.x = x_old * cos_g - c.y * sin_g; c.y = x_old * sin_g + c.y * cos_g;

    xuat();
}
