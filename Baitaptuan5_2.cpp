#include <stdio.h>
#include <stdlib.h>
 
void NhapMang(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", (arr + i));
    }
}
void XuatMang(int *arr, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = %d\n", i, *(arr + i));
    }
}
void ThemPhanTu(int *a, int &n, int val, int pos)
{
    a = (int *)realloc(a, (n + 1) * sizeof(int));
    if (pos < 0)
    {
        pos = 0;
    }
    else if (pos > n)
    {
        pos = n;
    }
    for (int i = n; i > pos; i--)
    {
        *(a + i) = *(a + i - 1);
    }
    *(a + pos) = val;
    ++n;
}
void XoaPhanTu(int *a, int &n, int pos)
{
    if (n <= 0){
        return;
    }
    if (pos < 0){
        pos = 0;
    }
    else if (pos >= n){
        pos = n - 1;
    }
    for (int i = pos; i < n - 1; i++){
        a[i] = a[i + 1];
    }
    a = (int *)realloc(a, (n - 1) * sizeof(int));
    --n;
}
 
int main()
{
    int *arr;
    int n;
    do
    {
        printf("Nhap so luong n = ");
        scanf("%d", &n);
    }while (n < 1);
    arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Khong the cap phat!");
        exit(0);
    }
 
    NhapMang(arr, n);
    printf("\nMang vua nhap la:\n");
    XuatMang(arr, n);
 
    printf("\n=======THEM PHAN TU======\n");
    int val, pos;
    printf("\nNhap so can them: ");
    scanf("%d", &val);
    printf("\nNhap vi tri muon chen: ");
    scanf("%d", &pos);
    ThemPhanTu(arr, n, val, pos);
    printf("\nMang sau khi them:\n");
    XuatMang(arr, n);
 
    printf("\n=======XOA PHAN TU======\n");
    printf("\nNhap vi tri muon xoa: ");
    scanf("%d", &pos);
    XoaPhanTu(arr, n, pos);
    printf("\nMang sau khi xoa:\n");
    XuatMang(arr, n);
    free(arr);
}
