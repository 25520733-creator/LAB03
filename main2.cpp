#include "cDaGiac.h"

int main() {
    cDaGiac dg;

    cout << "--- NHAP DA GIAC ---\n";
    dg.Nhap();

    cout << "\nDa giac ban dau:\n";
    dg.Xuat();
    cout<<"nhap 2 he so tinh tien: ";
    int d, h;
    cin>>d>>h;
    dg.TinhTien(d,h);
    dg.Xuat();

    cout << "\nnhap he so phong to: ";
    double k;
    cin>>k;
    dg.PhongTo(k);
    dg.Xuat();

    cout << "\nnhap goc can quay: ";
    double g;
    cin>>g;
    dg.Quay(g); // 90 do
    dg.Xuat();

    return 0;
}
