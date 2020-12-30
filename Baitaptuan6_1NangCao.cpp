/* Viết hàm tìm x mu n double Pow(double, int)

Viết hàm tìm N! int Factorial(int)

Viết hàm tìm số Fibonacci tại t int Fibonacci(int)

Viết hàm tìm số nghiệm và giá trị các nghiệm của phương 
trình bậc 2 int Root(double, double, double, double *, double *)
hoặc int Root(double, double, double, double *)
Viết hàm tính oK và oF từ oC 
void Temperature(double, double *, double *)
*/

#include <iostream>
#include <math.h>

using namespace std;

double Pow(double x, int n){
    int S=1.0;
    for(int i=0;i<n;i++)
        S=S*x;
    return S;
}
int Factorial(int N){
    int S=1;
    if(N==0)
        return 0;
    else{
        for(int i=1;i<=N;i++)
            S=S*i;
    }
    return S;
}
int Fibonacci(int n){
    if(n==1 || n==2)
        return 1;
    return Fibonacci(n-1) + Fibonacci(n-2);
}
int Root(double a, double b, double c, double*x1, double*x2){
    if(a==0){
        if(b==0 && c==0)
            cout<<"Phuong trinh vo so nghiem";
        if(b==0 && c!=0)
            cout<<"Phuong trinh vo nghiem";
        if(b!=0)
            cout<<"Phuong trinh co nghiem duy nhat"<<-c/b;

    }else
    {
        int denlta=pow(b,2)-4*a*c;
        if(denlta==0)
            cout<<"Phuong trinh co nghiem duy nhat"<<-b/(2*a);
        if(denlta!=0){
            x1=(-b-sqrt(denlta))/(2*a);
            x2=(-b+sqrt(denlta))/(2*a);
            cout<<"Phuong trinh co 2 nghiem phan biet"<<endl;
            cout<<"x1 = "<<x1<<endl;
            cout<<"x2 = "<<x2<<endl;
        }
        if (denlta<0){
            cout<<"Phuong trinh co nghiem phuc "<<endl;
            cout<<"x1 = "<<-b/(2*a)<<" + "<<sqrt(denlta)/(2*a)<<"i"<<endl;
            cout<<"x1 = "<<-b/(2*a)<<" - "<<sqrt(denlta)/(2*a)<<"i"<<endl;
        }   
    }
    return 0;
}
void Temperture(double C, double*K, double*F){
    cout<<"Nhiet do C doi sang K la "<<C+273<<endl;
    cout<<"Nhiet do C doi sang F la "<<(9/5)*C + 32;

}
int main(){
    int x,n;
    cout<<"x= ";cin>>x;
    cout<<"n= ";cin>>n;
    cout<<Pow(x,n)<<endl;
    cout<<Factorial(n)<<endl;
    cout<<Fibonacci(x);
    // Tinh nghiem cua phuong trinh bac 2
    float a,b,c;
    float x1,x2;
    cout<<"a= ";cin>>a;
    cout<<"b= ";cin>>b;
    cout<<"c= ";cin>>c;
    cout<<Root(a,b,c,x1,x2);
    return 0;
}
