#include "cArray.h"
#include<bits/stdc++.h>
using namespace std;
cArray::cArray()
{
};

    void cArray:: nhap()
    {
        cout<<"nhap so luong phan tu trong mang: ";
        cin>>n;
        for (int i=0;i<n;i++)
        {
            cin>>a[i];
        }
    }
    void cArray:: xuat()
    {
        for (int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
    }
    int cArray:: timx(int x)
    {
        int dem=0;
        for (int i=0;i<n;i++)
        {
            if (a[i]==x)
            {
                dem++;
            }
        }
        return dem;
    }
    bool cArray:: tangdan()
    {
        for (int i=0;i<n-1;i++)
        {
            if (a[i]>a[i+1])
            {
                return false;
            }
        }
        return true;
    }
    int cArray:: lemin()
    {
        int min1;
        int flag =0;
        for (int i=0;i<n;i++)
        {
            if (a[i]%2!=0 )
            {
                if (!flag||a[i]<min1)
                {
                    min1=a[i];
                    flag =1;
                }
            }
        }
        if (flag)
        return min1;
    else
        return -1;
    }
    bool cArray:: nguyento(int k)
    {
        if (k<2) return false;
        else
        {
            for(int i=2;i<k;i++)
            {
                if (k%i==0)
                {
                    return false;
                }
            }
        }
        return true;
    }
   int cArray::timnguyento()
{
    int max1 = -1; // giả sử không có số nguyên tố

    for (int i = 0; i < n; i++)
    {
        if (nguyento(a[i]))
        {
            if (max1 == -1 || a[i] > max1)
            {
                max1 = a[i];
            }
        }
    }

    return max1;
}

    void cArray:: sapxep()
    {

        for (int i=0;i<n-1;i++)
        {
            for (int j=i+1;j<n;j++)
            {
                if (a[i]>a[j])
                {
                    swap(a[i],a[j]);
                }
            }
        }
    }


