/*Bài 2: Tham khảo cách viết hàm và tổchức 
CT bài 1, thực hiện các hàm sau
–Nhập dãy cấu trúc (mỗi cấu trúc chứa dữ liệu 1 thí sinh: Tên, Tổng điểm)
–Hoán vị hai biến cấu trúc 
–Sắp xếp dãy thí sinh theo thứ tự giảm dần của tổng điểm
–In một biến cấu trúc
Yêu cầu: CT sẽ nhập dữ liệu một ds thí sinh, 
nhập điểm chuẩn và in ra ds thí sinh trúng tuyển*/

#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;

struct SinhVien {
    char Ten[50];
    float TongDiem;
};
typedef SinhVien SV;
void HoanVi(SV*a,int i, int j){
    //Hoan vi ten
    SV tmp;
    tmp=a[i];
    a[i]=a[j];
    a[j]=tmp;
}
// Sap xep danh sach thi sinh teo thu tu giam dan cua tong diem
void SapXepGiamDan(SV*a,int n){
    cout<<"Ten"<<"                   "<<"Tong Diem"<<endl;
    cout<<endl;
    for(int i=0;i<n-1;i++){
    	for(int j=n-1;j>i;j--){
            if(a[j].TongDiem>a[j-1].TongDiem)
                HoanVi(a,j-1,j);
        }
	}
        
    //Xuat mang
    for(int i=0;i<n;i++){
    	cout<<a[i].Ten<<"           ";
    	cout<<a[i].TongDiem;
        cout<<endl; 
	}
}
int main(){
    // Nhap danh sach thi sinh
    SV*a = new SV;
    int n;
    cout<<"Moi ban nhap so luong danh sach sinh vien can nhap = ";
    cin>>n;
    for(int i=0;i<n;i++){
    	fflush(stdin);
        cout<<"Ten: ";
        gets(a[i].Ten);
        cout<<"Tong Diem: ";
        cin>>a[i].TongDiem;
    }
    // Danh sach thi sinh trung tuyen 
    SapXepGiamDan(a,n);
    return 0;  
}