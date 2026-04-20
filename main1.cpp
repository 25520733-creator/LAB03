#include "ctamgiac.h"
#include<iostream>
using namespace std;

int main() {
    ctamgiac A;
    A.nhap();
    A.xuat();

    cout << endl << "Chu vi: " << A.chuvi() << endl;
    cout << "Dien tich: " << A.dientich();

    A.check();

    double k, h;
    cout << "\nnhap he so phong to: ";
    cin >> k;
    ctamgiac tam1 = A;
    tam1.phongto(k);

    cout << "\nnhap he so thu nho: ";
    cin >> h;
    ctamgiac tam2 = A;
    tam2.thunho(h);

    double tx, ty;
    cout << "\nnhap he so tinh tien x,y: ";
    cin >> tx >> ty;
    ctamgiac tam3 = A;
    tam3.tinhtien(tx, ty);

    double goc;
    cout << "\nnhap goc quay: ";
    cin >> goc;
    ctamgiac Aquay = A;
    Aquay.quay(goc);

    return 0;
}
