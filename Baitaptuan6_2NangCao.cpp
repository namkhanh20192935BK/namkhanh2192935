/*
1) Viết hàm in mảng số nguyên có n phần tử 
void Print(const int *, int)
2) Viết hàm tính tổng của mảng các số nguyên có n phần tử
int Sum(const int *, int)
3) Viết hàm tính trung bình cộng của mảng các số nguyên có n phần tử
double Averange(const int *, int)
4) Viết hàm tìm giá trị của đa thức bậc n tại x (hệ số
của đa thức là một mảng số thực)
double Polynorm(const double *, int n, double)
5) Viết hàm đổi xâu ký tự sang số 
double Number(const char *) */

#include <iostream>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
using namespace std;

void Print(const int *p , int n){
    for(int i=0;i<n;i++)
        cout<<"a["<<i<<"] = "<<*(p+i)<<endl;
}
int Sum(const int*p,int n){
    int Sum=0;
    for(int i=0;i<n;i++)
        Sum+=*(p+i);
    return Sum;
}
double Average(const int*p, int n){
    return (double)Sum(p,n)/n;        
}
double Polynorm(const double*q, int n, double x){
	double s1=0.0; 
	for(int i=0;i<n;i++)
		s1+= *(q+i)*pow(x,i); 
	return s1; 	 
}
double Number(const char *c){
    double N = atof(c);
    return N;
}
char*Viet(char*s){
	int n=strlen(s);
	for(int i=0;i<n-1;i++){
		if(s[i]==' '&& s[i+1]==' '){
				strcpy(&s[i],&s[i+1]);
			i--;
			n--;
		}
	}
	if(s[0]==' ')
		strcpy(&s[0],&s[1]);
	if(s[0]>=97)
		s[0]-=32;
	for(int i=0;i<n-1;i++)
		if(s[i]==' '&&s[i+1]>=97)
			s[i+1]-=32;
	return s;
}
int main(){
    int n,a[100];
    cout<<"Nhap n= ";
    cin>>n;
    int *p=&a[n];
    for(int i=0;i<n;i++){
    	cout<<"a["<<i<<"] = ";
    	cin>>*(p+i);
	}
    Print(p,n);
    //Tinh tong day so
    cout<<"Tong day so la "<<Sum(p,n);
    //Trung binh cong day so
    cout<<"\nTrung binh day so la "<<Average(p,n);
    // Viết hàm tìm giá trị của đa thức bậc n tại x
    //-------------------------------
    double b[100],x;
    double*q=&b[n];
    cout<<"\n Nhap mang so thuc "<<endl;
    for(int j=0;j<n;j++){
        cout<<"b["<<j<<"] = ";
        cin>>*(q+j);
    }
    cout<<"Gia tri x = ";
    cin>>x;
    cout<<Polynorm(q,n,x);
    //-------------------------------
    char c[50];
    fflush(stdin);
    cout<<"\nDay xau ki tu can doi: ";
    gets(c);
    cout<<"Sau khi doi: "<<Number(c);
    char chuoi[50];
    //-------------------------------
    fflush(stdin);
    cout<<"\nXau can chuan hoa: ";
    gets(chuoi);
    cout<<Viet(chuoi);
    return 0;
}
