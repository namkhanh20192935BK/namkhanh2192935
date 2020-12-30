#include <iostream>
#include <typeinfo>
using namespace std;

int main(){

    int n = 25;
    float n3 = 11;
    const double p = 3.1412;
    unsigned q = 63000;
    char c = 'n';
    enum WeekDay{Mon = 2,Tue, Wed, Thu, Fri, Sat, Sun = 1 };
    double y = 12.3456789e16;
    char *ch = "welcome C++";
    int *a = &n;
    float n1 = n3/3;
    cout << "value of n1 : "<< n1 << '\n';
      cout <<" type of n1 "<<typeid(n1).name()<<endl;
    cout << "value of p : "<< p+5 << "\n";
    	cout <<" type of p "<<typeid(p).name()<<endl;
    cout << "value of q : "<< q << "\n";
      cout <<" type of q "<<typeid(q).name()<<endl;
    cout << "value of x : "<< WeekDay(Sat) << "\n";
      cout <<" type of x "<<typeid(p).name()<<endl;
    cout << "value of y : "<< y << "\n";
      cout <<" type of y "<<typeid(p).name()<<endl;
    cout << "value of ch : "<< ch << "\n";
      cout <<" type of ch "<<typeid(ch).name()<<endl;
    cout << "addr of n : "<< a << "\n";
      cout <<" type of n "<<typeid(n).name()<<endl;
    cout << "addr of ch : "<< (void*)ch << "\n";
      cout <<" type of ch "<<typeid(p).name()<<endl;
}
