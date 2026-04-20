#include "cDaThuc.h"

cDaThuc::cDaThuc(int bac) {
    n = bac;
    for (int i = 0; i < 100; i++) a[i] = 0;
}

void cDaThuc::Nhap() {
    cout << "Nhap bac cua da thuc: "; cin >> n;
    // Reset mảng về 0 trước khi nhập mới
    for (int i = 0; i < 100; i++) a[i] = 0;

    for (int i = n; i >= 0; i--) {
        cout << "Nhap he so cua x^" << i << ": ";
        cin >> a[i];
    }
}

void cDaThuc::Xuat() const {
    bool flag = true;
    for (int i = n; i >= 0; i--) {
        if (a[i] == 0) continue;

        if (!flag && a[i] > 0) cout << " + ";
        if (a[i] < 0) cout << " - ";

        double val = abs(a[i]);
        // Chỉ in số nếu (hệ số != 1) hoặc (là số hạng tự do)
        if (val != 1 || i == 0) cout << val;

        if (i > 0) {
            cout << "x";
            if (i > 1) cout << "^" << i;
        }
        flag = false;
    }
    if (flag) cout << "0";
    cout << endl;
}

double cDaThuc::TinhGiaTri(double x) const {
    double res = 0;
    for (int i = 0; i <= n; i++) {
        res += a[i] * pow(x, i);
    }
    return res;
}

cDaThuc cDaThuc::Cong(const cDaThuc& k) const {
    int maxBac = (n > k.n) ? n : k.n;
    cDaThuc res(maxBac);
    for (int i = 0; i <= maxBac; i++) {
        res.a[i] = this->a[i] + k.a[i];
    }
    return res;
}

cDaThuc cDaThuc::Tru(const cDaThuc& k) const {
    int maxBac = (n > k.n) ? n : k.n;
    cDaThuc res(maxBac);
    for (int i = 0; i <= maxBac; i++) {
        res.a[i] = this->a[i] - k.a[i];
    }
    return res;
}
