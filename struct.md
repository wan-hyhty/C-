# Struct (tượng tự như hướng đối tượng)

- Là kiểu dữ liệu do người dùng tự định nghĩa
- Trong struct chứa các thuộc tính để lưu thông tin

## Cú pháp

```c
struct struct_name{
    //danh sách các thuộc tính
}
```

- Ví dụ:

```c
struct sinhVien{
    char ten[100];
    char lop[100];
    double gpa;
}
typedef struct sinhVien SinhVien;
// thay vì viết struct sinhVien thì ta có thể typedef thành SinhVien
int main(){
    sinhVien x;
}
```

## Toán tử dot (giống python)

- cho phép chúng ta truyền dữ liệu từ bàn phím vào các thành phần bên trong struct

```c
struct sinhVien{
    char ten[100];
    char lop[100];
    double gpa;
    gets(x.ten);
    gets(x.lop);
    scanf("%lf", &x.gpa);
    printf("%s %s %.2lf\n", x.ten, x.lop, x.gpa);
}

int main (){

}
```

## Gán 2 thành phần của struct

- là gán trường dữ liệu của A cho B

```c
    struct sinhVien y = x;
```

# code

```c
#include <stdio.h>
#include <stdlib.h>
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

    int res = ucln(a.tu, a.mau);
    printf("%d/%d\n", (int)(a.tu / res), (int)(a.mau / res));
    res = ucln(b.tu, b.mau);
    printf("%d/%d\n", (int)(b.tu / res), (int)(b.mau / res));
    quyDong(&a, &b);
    int tong = a.tu + b.tu;
    int hieu = a.tu - b.tu;
    int temp = ucln(tong, a.mau);
    printf("%d/%d\n", (int)(tong / temp), (int)(a.mau / temp));
    temp = ucln(abs(hieu), a.mau);
    if (hieu == 0)
        printf("0");
    else
        printf("%d/%d\n", (int)(hieu / temp), (int)(a.mau / temp));
}
```

```c
#include <stdio.h>

struct soPhuc
{
    int x;
    int y;
};

typedef struct soPhuc soPhuc;

soPhuc tong(soPhuc x, soPhuc y)
{
    soPhuc res;
    res.x = x.x + y.x;
    res.y = x.y + y.y;
    return res;
}

soPhuc hieu(soPhuc x, soPhuc y)
{
    soPhuc res;
    res.x = x.x - y.x;
    res.y = x.y - y.y;
    return res;
}

soPhuc tich(soPhuc x, soPhuc y)
{
    soPhuc res;
    res.x = x.x * y.x + x.y * y.y * -1;
    res.y = x.x * y.y + x.y * y.x;
    return res;
}

int main()
{
    soPhuc z1;
    soPhuc z2;
    soPhuc temp;
    scanf("%d%d%d%d", &z1.x, &z1.y, &z2.x, &z2.y);

    temp = tong(z1, z2);
    printf("%d %d\n", temp.x, temp.y);

    temp = hieu(z1, z2);
    printf("%d %d\n", temp.x, temp.y);

    temp = tich(z1, z2);
    printf("%d %d\n", temp.x, temp.y);
}
```
```c
#include <stdio.h>
#include <string.h>
struct sinhVien
{
    char ten[100];
    char ngaysinh[100];
    char diachi[50];
    int toan;
    int ly;
    int hoa;
    int tong;
};

typedef struct sinhVien SV;

void tong(SV *x)
{
    x->tong = x->toan + x->ly + x->hoa;
}

void thukhoa(SV *x, int max)
{
    if (x->tong == max)
        printf("%s %s %s %d\n", x->ten, x->ngaysinh, x->diachi, x->tong);
}

int main()
{
    int n;
    scanf("%d", &n);
    getchar();
    int max_value = 0;
    SV ds[n + 10];
    for (int i = 0; i < n; i++)
    {
        fgets(ds[i].ten, 100, stdin);
        ds[i].ten[strlen(ds[i].ten) - 1] = '\0';
        fgets(ds[i].ngaysinh, 100, stdin);
        ds[i].ngaysinh[strlen(ds[i].ngaysinh) - 1] = '\0';
        fgets(ds[i].diachi, 50, stdin);
        ds[i].diachi[strlen(ds[i].diachi) - 1] = '\0';
        scanf("%d%d%d", &ds[i].toan, &ds[i].ly, &ds[i].hoa);
        getchar();
        tong(&ds[i]);
        if (ds[i].tong > max_value)
            max_value = ds[i].tong;
    }
    printf("DANH SACH THU KHOA :\n");
    for (int i = 0; i < n; i++)
    {
        thukhoa(&ds[i], max_value);
    }
    printf("KET QUA XET TUYEN:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%s %s %s %d ", ds[i].ten, ds[i].ngaysinh, ds[i].diachi, ds[i].tong);
        if (ds[i].tong < 24)
            printf("TRUOT\n");
        else
            printf("DO\n");
    }
}
```