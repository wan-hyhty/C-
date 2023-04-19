#include <stdio.h>
#include <string.h>
struct sinhVien
{
    char ten[100];
    char ngaysinh[100];
    char diachi[100];
    float gpa
};

typedef struct sinhVien SV;

void sapXep(){
    
}

int main()
{
    int n;
    scanf("%d", &n);
    SV ds[n + 10];

    for (int i = 0; i < n; i++)
    {
        getchar();
        fgets(ds[i].ten, 100, stdin);
        ds[i].ten[strlen(ds[i].ten) - 1] = '\0';
        fgets(ds[i].ngaysinh, 100, stdin);
        ds[i].ngaysinh[strlen(ds[i].ngaysinh) - 1] = '\0';
        fgets(ds[i].diachi, 100, stdin);
        ds[i].diachi[strlen(ds[i].diachi) - 1] = '\0';
        scanf("%f", &ds[i].diachi);
    }
}
