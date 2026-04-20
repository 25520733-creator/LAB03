#include "cNhanVienSX.h"
#include <algorithm>

cNhanVienSX::cNhanVienSX() {
    maNV = hoTen = ""; ngay = thang = 1; nam = 2000; soSanPham = 0; donGia = 0;
}

void cNhanVienSX::Nhap() {
    cout << "Nhap ma NV: "; cin >> maNV;
    cin.ignore();
    cout << "Nhap ho ten: "; getline(cin, hoTen);
    cout << "Nhap ngay thang nam sinh: "; cin >> ngay >> thang >> nam;
    cout << "Nhap so san pham: "; cin >> soSanPham;
    cout << "Nhap don gia: "; cin >> donGia;
}

void cNhanVienSX::Xuat() const {
    cout << "Ma: " << maNV << " | Ten: " << hoTen << " | Luong: " << (long long)TinhLuong() << endl;
}

double cNhanVienSX::TinhLuong() const {
    return soSanPham * donGia;
}

// Cài đặt các hàm quản lý danh sách
void NhapDS(vector<cNhanVienSX> &ds, int n) {
    for(int i = 0; i < n; i++) {
        cout << "\nNhan vien " << i+1 << ":" << endl;
        ds[i].Nhap();
    }
}

void XuatDS(const vector<cNhanVienSX> &ds) {
    for(const auto& nv : ds) nv.Xuat();
}

void LuongThapNhat(const vector<cNhanVienSX> &ds) {
    int vtri = 0;
    for(int i = 1; i < ds.size(); i++) {
        if(ds[i].TinhLuong() < ds[vtri].TinhLuong()) vtri = i;
    }
    cout << "\nNhan vien luong thap nhat: "; ds[vtri].Xuat();
}

double TongLuong(const vector<cNhanVienSX> &ds) {
    double tong = 0;
    for(const auto& nv : ds) tong += nv.TinhLuong();
    return tong;
}

// Cần thêm Getter cho ngày và tháng vào class trong file .h trước nhé:
// int getNgaySinh() const { return ngay; }
// int getThangSinh() const { return thang; }

void TuoiCaoNhat(const vector<cNhanVienSX> &ds) {
    if (ds.empty()) return;

    int vtri = 0;
    for(int i = 1; i < ds.size(); i++) {
        // So sánh năm trước
        if(ds[i].getNamSinh() < ds[vtri].getNamSinh()) {
            vtri = i;
        }
        // Nếu bằng năm, so sánh đến tháng
        else if(ds[i].getNamSinh() == ds[vtri].getNamSinh()) {
            if(ds[i].getThangSinh() < ds[vtri].getThangSinh()) {
                vtri = i;
            }
            // Nếu bằng cả năm và tháng, so sánh đến ngày
            else if(ds[i].getThangSinh() == ds[vtri].getThangSinh()) {
                if(ds[i].getNgaySinh() < ds[vtri].getNgaySinh()) {
                    vtri = i;
                }
            }
        }
    }
    cout << "\nNhan vien tuoi cao nhat: " << ds[vtri].getHoTen() << endl;
}

void SapXepLuong(vector<cNhanVienSX> &ds) {
    for(int i = 0; i < ds.size() - 1; i++) {
        for(int j = i + 1; j < ds.size(); j++) {
            if(ds[i].TinhLuong() > ds[j].TinhLuong()) swap(ds[i], ds[j]);
        }
    }
}
