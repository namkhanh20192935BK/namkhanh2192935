//Bài 3: Viết chương trình nhập chuỗi s1,
// sau đó copy s1 vào chuỗi s2

#include <iostream>
#include <string.h>
using namespace std;

void copy(char*s1, char*s2){
	strcpy(s2,s1);
}
int main(){
    char s1[100],s2[100];
    cout<<"Moi ban nhap xau s1 : ";
    gets(s1);
    copy(s1,s2);
    cout<<"Xau s2 :"<<s2;
    return 0;
} 