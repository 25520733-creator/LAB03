#include "cNhanVienSX.h"

int main() {
    int n;
    cout << "Nhap so luong nhan vien: "; cin >> n;
    vector<cNhanVienSX> ds(n);

    NhapDS(ds, n);

    cout << "\n--- DANH SACH NHAN VIEN ---" << endl;
    XuatDS(ds);

    LuongThapNhat(ds);

    cout << "\nTong luong cong ty: " << (long long)TongLuong(ds) << " VND" << endl;

    TuoiCaoNhat(ds);

    SapXepLuong(ds);
    cout << "\n--- DANH SACH SAU KHI SAP XEP LUONG TANG DAN ---" << endl;
    XuatDS(ds);

    return 0;
}
