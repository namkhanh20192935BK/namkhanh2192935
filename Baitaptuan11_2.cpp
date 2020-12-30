#include<iostream>
#include<math.h>
using namespace std;
class Complex {
int real, imag;
public:
	friend ostream& operator << (ostream& os, const Complex& d)//ham toan tu in
	{
		os << "Hien thi : " << d.real << " + " << d.imag << "i";
		return os;
	}
	friend istream& operator >> (istream& is, Complex& d) //ham toan tu nhap
	{
		is >> d.real >> d.imag;
		return is;
	}
	Complex(int r =0 , int i = 0)  
	{
		this->real = r;
		this->imag = i;
	}
	Complex operator+(const Complex& b)
	{
		Complex z(real + b.real, imag + b.imag);
		return z; 
	}
	Complex operator-(const Complex& b)  
	{
		return Complex(real - b.real, imag - b.imag); 
	}
	Complex operator*(const Complex& z) // z'=a'+b'i , z=a+bi => z= aa'-bb' + (ab'+a'b)i
	{
		Complex p;
		p.real = real * z.real - imag * z.imag;
		p.imag = real * z.imag + imag * z.real;
		return p;
	}
	Complex operator/(const Complex& z) // z' = a'+b'i , z=a+bi => z= (aa'+bb')/|z| + (ab'-a'b)/|z| i
	{
		Complex p;
		int mau;
		mau = sqrt(pow(z.real, 2.0) + pow(z.imag, 2.0));
		p.real = (real * z.real + imag * z.imag) / mau;
		p.imag = (z.real * imag - real * z.imag) / mau;
		return p;
	}
	Complex& operator +=(const Complex& b)
	{
		real = real + b.real;
		imag = imag + b.imag;
	}
	Complex& operator -=(const Complex& b)
	{
		real = real - b.real;
		imag = imag - b.imag;
	}
};
int main()
{
	//A = B*C + (D-E) 
	Complex A, B, C, D, E;
	cout << "Nhap so phuc B"; cin >> B;
	cout << "\n=>"; cout << B;
	cout << "\nNhap so phuc C"; cin >> C;
	cout << "\n=>"; cout << C;
	cout << "\nNhap so phuc D"; cin >> D;
	cout << "\n=>"; cout << D;
	cout << "\nNhap so phuc E"; cin >> E;
	cout << "\n=>"; cout << E;
	cout << "\n\n    Tinh toan phuc A :";
	A = B * C + (D - E);
	cout << "\n     =>"; cout << A;
	return 0;
}