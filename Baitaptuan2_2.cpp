#include <iostream>
#include <typeinfo>

using namespace std;

int main(){
    int a;
    char c;
    cout <<" type of a + 1.0 is "<<typeid(a+1.0).name()<<endl;
    cout <<" type of c + 1 is "<<typeid(c+1).name()<<endl;
    cout <<" type of char(c+32) is "<<typeid(char(c+32)).name()<<endl;
    cout <<" type of c+a is "<<typeid(c+a).name()<<endl;

}
