#include<iostream>
#include<string>
#include<math.h>
using namespace std;

class DT {
private:
	int n; // bac cua da thuc
	double* a;// tro toi cung nho chua cac he so da thuc
public:
	DT()  //ham tao khong doi
	{
		this->n = 0;
		this->a = NULL;
	}
	DT(int n1) //ham tao mot doi
	{
		this->n = n1;
		this->a = new double[n1 + 1];
	}
	
	friend ostream& operator << (ostream& os, const DT& d)//ham toan tu in
	{
		cout << endl;
		for (int i = 0; i <= d.n; i++)
		{
			os << "("<< d.a[i] <<")"<< "x^" << i;
			if (i != d.n)
				os << "+";
		}
		cout << endl;
		return os;
	}
	friend istream& operator >> (istream& is, DT& d) //ham toan tu nhap
	{
		for (int i = 0; i <= d.n; i++)
		{
			is >> d.a[i];
		}
		return is;
	}
	DT daoDau(DT p)  //ham dao dau da thuc
	{
		for (int i = 0; i <= n; i++)
		{
			p.a[i] = p.a[i] * (-1);
		}
		return p;
	}
	DT operator + (const DT& d2 ) //ham toan tu cong
	{
		DT p;
		if (d2.n > n) p.n = d2.n;
		else p.n = n;
		p.a = new double[p.n];
		for (int i = 0; i <= p.n; i++)
		{
			p.a[i] =this->a[i] + d2.a[i];
		}
		return p;
	}
	DT operator - (DT d2)    //ham toan tu tru
	{
		DT p;
		int i;
		if (d2.n > n) p.n = d2.n;
		else p.n = n;
		p.a = new double[p.n];
		for ( i = 0; i <= p.n; i++)
		{
			p.a[i] = this->a[i] - d2.a[i];
		}
		return p;
	}
	DT operator * (const DT& d2)  // ham toan tu nhan
	{
		DT p;
		if (d2.n > n) p.n = d2.n;
		else p.n = n;
		p.a = new double[p.n];
		for (int i = 0; i <= p.n; i++)
		{
			p.a[i] = this->a[i] * d2.a[i];
		}
		return p;
	}
	double F(DT p, double x)
	{
		double sum = 0; 
		for(int i =0  ; i<=p.n ; i++)
		{
			sum = sum + (p.a[i]) * pow(x, i);
		}
		return sum;
	}
	double operator ^ (const double& x)  //da thuc mu x
	{
		double sum2 = 0; 
		for (int i = 0; i <= n; i++)
		{
			sum2 = sum2 + a[i] * pow(x, i);
		}
		return sum2;
	}
	double operator[](int i)  //truy nhap vao mot he so bat ky cua da thuc
	{
		if (i < 0)
			return double(n);
		else
			return a[i];
	}
	// Hàm sao chép
	DT (DT& b) {
		int i;
		cout << "Su dung ham tao sao chep:" << endl;
		cout << "Tao doi tuong:" << this << endl;
		a = new double[n = b.n];
		cout << "Xin cap phat bo nho" << n << " so thuc hien tai: " << a << endl;

		for (int i = 0; i <= n; i++) {
			a[i] = b.a[i];
		}
	} 
	// Hàm gán hai da th?c dã cho tru?c
	DT& operator = (const DT& x) {
		if (n != x.n) {
			delete[] a;
			n = x.n;
			a = new double[n];
		}
		for (int i = 0; i <= n; i++) {
			a[i] = x.a[i];
		}
		return *this;
	}
	//hàm hi?n th? th? d? th? hi?n thông tin các hàm t?o, h?y du?c g?i t?i 
	~DT() {
		cout << "\nhuy bo nho " << n << " so thuc tai: " << a << endl;
		free(a);
	}
};
int main()
{
	DT p(3), q(2), r(3), s(2);
	cout << "Nhap cac he so cua da thuc p :"; cin >> p;
	cout << "\n Hien thi :"; cout << p;
	cout << "\nNhap cac he so cua da thuc q :"; cin >> q;
	cout << "\n Hien thi :"; cout << q;
	cout << "\nNhap cac he so cua da thuc r :"; cin >> r;
	cout << "\n Hien thi :"; cout << r;
	cout << "\nhap cac he so cua da thuc s :"; cin >> s;
	cout << "\n Hien thi :"; cout << s;
	DT hieu , tong;
	DT f;
	tong = p + q; hieu = r - s;
	f = f.daoDau(tong) * hieu;
	cout << "\n\n Hien thi gia tri cua f" << endl;
	cout << f;
	double X1, X2;
	cout << "\n Nhap cac so thuc X1 va X2 :"; cin >> X1 >> X2;
	double sum1 , sum2 ;
	cout << "\n Gia tri cua da thuc f tai vi tri X1 : " << f.F(f, X1) << endl;
	sum2 = f ^ X2;
	cout << "\n Gia tri cua da thuc f tai vi tri X2 : " << sum2 << endl;
	return 0;
}
