#include <stdio.h>
#include <math.h>
struct phanso
{
    int tu;
    int mau;
};

typedef struct phanso phanSo;
int ucln(int a, int b)
{
    if (b == 0)
        return a;
    return ucln(b, a % b);
}

int bcnn(int a, int b)
{
    return (int)(a * b) / ucln(a, b);
}

void nhap(phanSo *x)
{
    scanf("%d%d", &x->tu, &x->mau);
}

void quyDong(phanSo *a, phanSo *b)
{
    int mauChung = bcnn(a->mau, b->mau);
    a->tu *= (int)(mauChung / a->mau);
    b->tu *= (int)(mauChung / b->mau);
    a->mau = mauChung;
    b->mau = mauChung;
}

int main()
{
    phanSo a;
    phanSo b;
    nhap(&a);
    nhap(&b);

    printf("%d/%d\n", a.tu, a.mau);
    printf("%d/%d\n", b.tu, b.mau);
    quyDong(&a, &b);
    int tong = a.tu + b.tu;
    int hieu = a.tu - b.tu;
    int temp = ucln(tong, a.mau);
    printf("%d/%d\n", (int)(tong / temp), (int)(a.mau / temp));
    temp = ucln(abs(hieu), a.mau);
    printf("%d/%d\n", (int)(hieu / temp), (int)(a.mau / temp));
}