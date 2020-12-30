/*Bài 1: Chương trình sau tổ chức thành 3 hàm 
– Nhập dãy số double
– Hoán vị hai biến double
Sắp xếp dãy theo thứ tự tăng dần 
Yêu cầu: CT nhập vào một dãy và in ra dãy đã sắp xếp */

#include <iostream>
using namespace std; 

void nhapds(double* a, int n ){
    for(int i = 0; i <= n; ++i){
        cout <<"\nPhan tu thu "<<i <<":";
        cin >>a[i];
    }
}
void hv(double &x, double &y) //hoan vi 2 so
{
    double tg = x; 
    x= y; 
    y= tg;

}
void sapxep(double* a, int n){
    for(int i = 0; i <= n-1; ++i)
        for(int j = i + 1; j <= n; ++j)
            if(a[i] > a[j])
                hv(a[i], a[j]);
}
int main(){   
     double x[100];
     int i, n;
     cout <<"\nN=";
     cin >>n;
     nhapds(x,n);
     sapxep(x,n);
     for(int i = 1; i <= n; ++i){
         cout<<x[i]<<" ";
        }
}