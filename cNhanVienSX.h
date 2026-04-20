#ifndef CNHANVIENSX_H
#define CNHANVIENSX_H

#include <iostream>
#include <string>
#include <vector>

using namespace std;

class cNhanVienSX {
private:
    string maNV;
    string hoTen;
    int ngay, thang, nam;
    int soSanPham;
    double donGia;

public:
    // Constructor
    cNhanVienSX();

    // Các phương thức cơ bản của lớp
    void Nhap();
    void Xuat() const;
    double TinhLuong() const;

    // Các Getter cần thiết cho các hàm xử lý bên ngoài
    string getHoTen() const { return hoTen; }
    int getNgaySinh() const { return ngay; }
    int getThangSinh() const { return thang; }
    int getNamSinh() const { return nam; }

    // Các Setter (nếu cần dùng sau này)
    void setSoSanPham(int sp) { soSanPham = sp; }
    void setDonGia(double gia) { donGia = gia; }
};

// Khai báo các hàm quản lý danh sách (Nằm trong file .cpp)
void NhapDS(vector<cNhanVienSX> &ds, int n);
void XuatDS(const vector<cNhanVienSX> &ds);
void LuongThapNhat(const vector<cNhanVienSX> &ds);
double TongLuong(const vector<cNhanVienSX> &ds);
void TuoiCaoNhat(const vector<cNhanVienSX> &ds);
void SapXepLuong(vector<cNhanVienSX> &ds);

#endif
