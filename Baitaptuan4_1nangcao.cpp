/*Bài 1: Viết chương trình thực hiện các yêu cầu sau

- Nhập 10 số nguyên bất kỳ.

- Tìm các số có tần suất xuất hiện lớn nhất và in ra màn hình.

- Sắp xếp mảng đã nhập theo giá trị tăng dần, tìm max/min.*/

#include <iostream>

using namespace std;

void Delete(int a[],int &n,int vitri){
    for(int i=vitri;i<n-1;i++){
        a[i]=a[i+1];
    }
    n--;
}
void FrequencyMax(int *a,int n){
    int b[10], dem=1,i,j; 
    int *c= new int;
    for(i=0;i<n;i++)
        b[i]=a[i];
	for(i=0;i<n;i++){
		int tg=b[i];
		for(j=i+1;j<n;j++)
			if(b[j]==tg){
				Delete(b,n,j);
				++dem;
			}
		c[i]=dem;
		dem=1;
	}
    
    //Xuat mang a
    for(i=0;i<10;i++)
        cout<<a[i]<<" ";
    cout<<endl;
    //Xuat mang b
    for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    //Xuat mang c
    for(i=0;i<n;i++)
        cout<<c[i]<<" ";
    int max=c[0];
	for(i=1;i<n;i++)
		if(max<c[i]){
			max=c[i];
		}
	cout<<"\nTan so xuat hien nhieu nhat la: "<<max<<endl;;
	delete c;
}
void Ascending(int*a){
    for(int i=0; i<9;i++)
        for(int j=9;j>i;j--){
            if(a[j]<a[j-1]){
                int tg = a[j];
                a[j]=a[j-1];
                a[j-1]=tg;
            }
        }
    // Dua mang da sap xep
    for(int i=0;i<10;i++)
    	cout<<a[i]<<" ";
    cout<<"\nGia tri lon nhat la "<<a[9];
    cout<<"\nGia tri nho nhat la "<<a[0];
}

int main(){
    int a[10],i;
    // Nhap mang 10 so nguyen
    for(i=0;i<10;i++){
        cout<<"s1["<<i<<"] = ";
        cin>>a[i];
    }
    FrequencyMax(a,10);
    Ascending(a);
    return 0;
}
