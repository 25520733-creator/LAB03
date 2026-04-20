#include <iostream>
#include "cArray.h"
using namespace std;

int main()
{
    cArray A;
    A.nhap();
    cout<<"mang vua nhap: "<<endl;
    A.xuat();
    cout<<endl;

    cout<<"nhap so nguyen x: \n";
    int x;
    cin>>x;
    cout<<"so lan xuat hien cua "<<x<<" trong mang: ";
    cout<<A.timx(x)<<endl;

    if (A.tangdan()==true)
    {
        cout<<"day la day tang dan\n";
    }
    else cout<<"day khong phai la day tang dan\n";

    cout<<"so le nho nhat: "<<A.lemin()<<endl;
    cout<<"so nguyen to lon nhat: "<<A.timnguyento()<<endl;

    if (A.tangdan()==true)
    {
        cout<<"mang da duoc sap xep";
    }
    else
    {
        cout<<"mang sau khi sap xep: \n";
        A.sapxep();
        A.xuat();
    }

    return 0;
}
