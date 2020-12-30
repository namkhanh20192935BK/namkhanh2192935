/*Bài 2: Nhập vào một danh sách gồm N sinh viên có các thuộc tính sau
Họ tên
Mã số
Lớp
Năm sinh
Môn học: Toán, Lý, Hóa
Điểm trung bình học kỳ
Yêu cầu thực hiện chương trình sau
- In ra tên các sinh viên có cùng năm sinh
- In ra tên các sinh viên học cùng lớp
- In ra tên các sinh viên cùng tên và cùng năm sinh
- In ra sinh viên cùng lớp chỉ học môn Toán, và sinh viên học cả 3 môn.
- Sắp xếp sinh viên theo thứ tự điểm trung bình học kỳ giảm dần.
- In ra số lượng sinh viên có cùng điểm trung bình học kỳ.*/

#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

struct SinhVien
{
    char HoTen[50];
    int MaSo;
    int Lop;
    int NamSinh;
    float Toan, Ly, Hoa;
};
void NhapSV(SinhVien sv,int n){
    
}
void Xuat(Sinh Vien sv, int pos){
    cout<<"Ho ten :"<< sv[pos].Hoten;
    cout<<"\nMa so: "<<sv[pos].MaSo;
    cout<<"\nLop: "<<sv[pos].Lop;
    cout<<"\nNam Sinh: "<<sv[pos].NamSinh;
    cout<<"\nToan: "<<sv[pos].Toan;
    cout<<"\nLy: "<<sv[pos].Ly;
    cout<<"\nHoa: "<<sv[pos].Hoa;
}

int main(){ 
    struct SinhVien sv[50];
    int N;
    cout<<"Moi ban nhap so luong sinh vien"<<endl;
    cout<<"N= ";cin>>N;
    cout<<"======== Moi ban nhap thong tin sinh vien ========\n";
    for(int i=0;i<N;i++){
        cout<<">>>> Sinh Vien "<<i+1<<" <<<<"<<endl;
        fflush(stdin);
        cout<<"Ho ten: ";
        gets(sv->HoTen);
        cout<<"Ma so: ";
        cin>>sv->MaSo;
        cout<<"Lop: ";
        cin>>sv->Lop;
        cout<<"Nam sinh: ";
        cin>>sv->NamSinh;
        cout<<"Toan: ";
        cin>>sv->Toan;
        cout<<"Ly: ";
        cin>>sv->Ly;
        cout<<"Hoa: ";
        cin>>sv->Hoa;
}
// In ra tên các sinh viên có cùng năm sinh
    cout<<"========In ra ten sinh vien co cung nam sinh========"<<endl;
    int year, dem=0;
    cout<<"Moi ban nhap nam sinh:  "; cin>>year;
    for(int i=0;i<N;i++)
        if(year == sv[i].NamSinh){
            ++dem;
            Xuat(sv,i);
        }
    if(dem==0)
        cout<<"Khong co ket qua";
    else
        cout<<"So sinh vien cung nam sinh: "<<dem;
}
dem=0;
//In ra tên các sinh viên cùng lop
    cout<<"\n========In ra ten cac sinh vien cung lop"<<endl;
    int class;
    cout<<"Moi ban nhap lop: "; cin>>class;
    for(int i=0;i<N;i++)
        if(class == sv[i].Lop){
            ++dem;
            Xuat(sv,i);
        }
    if(dem==0)
        cout<<"Khong co ket qua";
    else
        cout<<"So sinh vien cung lop: "<<dem;
}
dem=0;
//In ra tên các sinh viên cùng tên và cùng năm sinh
    cout<<"\n========In ra ten cac sinh vien cung ten va cung nam sinh"<<endl;
    cout<<"Moi ban nhap lop: "; cin>>class;
    cout<<"Moi ban nhap nam sinh:  "; cin>>year;
    for(int i=0;i<N;i++)
        if(year == sv[i].Lop && class == sv[i].HoTen){
            ++dem;
            Xuat(sv,i);
        }
    if(dem==0)
        cout<<"Khong co ket qua";
    else
        cout<<"So sinh vien cung lop: "<<dem;
//In ra sinh viên cùng lớp chỉ học môn Toán, và sinh viên học cả 3 môn.
