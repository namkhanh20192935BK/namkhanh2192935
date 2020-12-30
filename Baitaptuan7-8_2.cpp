#include<iostream>
using namespace std;
typedef struct
{
    int a, b;
}PS;

istream& operator >> (istream&  is , PS &p) // ham nhap
{	
	is>> p.a >> p.b ;
	return is ;
}
ostream& operator << (ostream&  os , PS p) // ham xuat
{
	os<< p.a << "/" <<p.b ;
	return os ;
}
int uscln(int x, int y) {
    if (x == 0 || y == 0)
    {
        return x + y;
    }
    while (x != y) {
        if (x > y) x = x - y;
        else y = y - x;
    }
    return x;
}
PS rutgon(PS p)
{
    p.a = p.a / uscln(p.a, p.b);
    p.b = p.b / uscln(p.a, p.b);
    return p;
}
PS operator +(PS p1, PS p2){
	PS p;
    p.a = p1.a * p2.b + p2.a * p1.b;
    p.b = p1.b * p2.b;
    return rutgon(p);
}
PS operator -(PS p1, PS p2)
{
    PS p;
    p.a = p1.a * p2.b - p2.a * p1.b;
    p.b = p1.b * p2.b;
    return rutgon(p);
}
PS operator *(PS p1, PS p2)
{
    PS p;
    p.a = p1.a * p1.b;
    p.b = p2.b * p2.b;
    return rutgon(p);
}
PS operator /(PS p1, PS p2)
{
    PS p;
    p.a = p1.a * p2.b;
    p.b = p1.b * p2.a;
    return rutgon(p);
}
int main()
{
    PS p, q, z, u, v;
    PS tu, mau, s;
    printf("\nNhap phan so p: "); cin >> p;
    printf("\nNhap phan so q: "); cin >> q;
    printf("\nNhap phan so z: "); cin >> z;
    printf("\nNhap phan so u: "); cin >> u;//s = (p - q * z) / (u + v)
    printf("\nNhap phan so v: "); cin >> v;
    tu = q*z;
    tu = p-tu;
    mau = u+v;
    s = tu/mau;
    printf("\nPhan so s= "); cout <<s;
}
